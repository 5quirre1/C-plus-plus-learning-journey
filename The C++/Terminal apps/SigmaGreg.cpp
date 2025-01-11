// evrry broken sorry
// was replaced with easier code; python
#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>
#include <vector>
#include <cctype>
#include <stdexcept>
#include <variant>
#include <regex>

class the_interpreter {
public:

    void run() {
        std::string line;
        std::cout << "SigmaGreg Terminal: Type the commands to do one line code. Type 'exit' to quit. type 'gregWRITE' to write a program!!!! (VERY BROKEN GREG)\n";
        
        while (true) {
            std::cout << "> ";
            std::getline(std::cin, line);
            
            if (line == "exit") {
                std::cout << "Exiting the interpreter, bai bai!!!\n";
                break;
            }

            try {
                execute(line);
            } catch (const std::exception& e) {
                std::cout << "Error: " << e.what() << "\n";
            }
        }
    }

private:
    std::unordered_map<std::string, std::variant<int, double, std::string>> variables;
    std::vector<std::string> programLines;

    void execute(const std::string& line) {
        std::istringstream stream(line);
        std::string command;
        stream >> command;

        if (command == "gregINT") {
            handleAssignment<int>(stream);
        } 
        else if (command == "gregSTRING") {
            handleAssignment<std::string>(stream);
        } 
        else if (command == "gregDOUBLE") {
            handleAssignment<double>(stream);
        } 
        else if (command == "gregPr") {
            handlePrint(stream);
        } 
        else if (command == "gregMa") {
            handleMath(stream);
        } 
        else if (command == "gregIn") {
            handleInput(stream);
        } 
        else if (command == "gregWRITE") {
            handleWrite();
        } 
        else if (command == "gregRUN") {
            handleRun();
        }
        else if (command == "gregType") {
            handleType(stream);
        }   
        else if (command == "gregRandom") {
            handleRandom(stream);
        }
        else if (command == "gregPrintAll") {
            handlePrintAll();
        }
        else {
            std::cout << "Unrecognized command: " << command << " sob\n";
        }
    }

    template <typename T>
    void handleAssignment(std::istringstream& stream) {
    std::string varName;
    char equalSign;
    T value;
    stream >> varName;

    if (stream.peek() == ':') {
        stream.get();
    }

    if constexpr (std::is_same<T, std::string>::value) {
        std::string strValue;
        std::getline(stream, strValue);
        if (strValue.size() >= 2 && strValue[0] == '"' && strValue[strValue.size() - 1] == '"') {
            strValue = strValue.substr(1, strValue.size() - 2);
        }
        value = strValue;
    } else {
        stream >> value;
    }

    variables[varName] = value;
}

    void handlePrint(std::istringstream& stream) {
    std::string input;
    stream >> input;

    if (input.front() == '"' && input.back() == '"') {
        input = input.substr(1, input.length() - 2);
        std::cout << input << std::endl;
    } else if (input.find('"') != std::string::npos) {
        std::string rest;
        std::getline(stream, rest);
        input += rest;
        input = input.substr(1, input.length() - 2);
        std::cout << input << std::endl;
    } else {
        if (variables.find(input) != variables.end()) {
            auto& value = variables[input];
            if (std::holds_alternative<int>(value)) {
                int intValue = std::get<int>(value);
                std::cout << intValue << std::endl;
            } else if (std::holds_alternative<std::string>(value)) {
                std::string strValue = std::get<std::string>(value);
                size_t equalsPos = strValue.find('=');
                if (equalsPos != std::string::npos) {
                    strValue = strValue.substr(equalsPos + 1);
                }
                while (strValue[0] == ' ') {
                    strValue.erase(0, 1);
                }
                if (strValue[0] == '"') {
                    strValue = strValue.substr(1, strValue.length() - 2);
                }
                std::cout << strValue << std::endl;
            } else {
                std::cout << "Warning: Variable '" << input << "' is not a string or an integer sib\n";
            }
        } else {
            std::cout << "Warning: Undefined variable '" << input << "' in print statement rgr\n";
        }
    }
}

    void handleSTRING(std::istringstream& stream) {
    std::string varName;
    stream >> varName;

    std::string strValue;
    std::getline(stream, strValue);
    size_t equalsPos = strValue.find('=');
    if (equalsPos != std::string::npos) {
        strValue = strValue.substr(equalsPos + 1);
    }
    while (strValue[0] == ' ') {
        strValue.erase(0, 1);
    }
    if (strValue[0] == '"') {
        strValue = strValue.substr(1, strValue.length() - 2);
    }

    variables[varName] = strValue;
}

void handleRandom(std::istringstream& stream) {
    int min, max;
    stream >> min >> max;

    if (min >= max) {
        std::cout << "Error: Invalid range for random number generation :sob:\n";
        return;
    }

    int randValue = rand() % (max - min + 1) + min;
    std::cout << "Random number: " << randValue << std::endl;
}


void handleType(std::istringstream& stream) {
    std::string varName;
    stream >> varName;

    if (variables.find(varName) != variables.end()) {
        auto& value = variables[varName];
        if (std::holds_alternative<int>(value)) {
            std::cout << "Variable '" << varName << "' is of type int greg\n";
        } else if (std::holds_alternative<double>(value)) {
            std::cout << "Variable '" << varName << "' is of type double greg \n";
        } else if (std::holds_alternative<std::string>(value)) {
            std::cout << "Variable '" << varName << "' is of type string greg\n";
        }
    } else {
        std::cout << "Error: Variable '" << varName << "' not found greg\n";
    }
}

void handlePrintAll() {
    std::cout << "Current variables:\n";
    for (const auto& var : variables) {
        std::cout << var.first << " = ";
        if (std::holds_alternative<int>(var.second)) {
            std::cout << std::get<int>(var.second);
        } else if (std::holds_alternative<double>(var.second)) {
            std::cout << std::get<double>(var.second);
        } else if (std::holds_alternative<std::string>(var.second)) {
            std::cout << std::get<std::string>(var.second);
        }
        std::cout << std::endl;
    }
}


    void handleMath(std::istringstream& stream) {
        std::string varName, op;
        double operand1, operand2;
        stream >> varName >> operand1 >> op >> operand2;

        double result = 0.0;
        if (op == "+") {
            result = operand1 + operand2;
        } else if (op == "-") {
            result = operand1 - operand2;
        } else if (op == "*") {
            result = operand1 * operand2;
        } else if (op == "/") {
            if (operand2 == 0) {
                std::cout << "Error: Division by zero dummy\n";
                return;
            }
            result = operand1 / operand2;
        } else {
            std::cout << "Error: Unknown operation '" << op << "' greg/ Supported operations are: +, -, *, /\n";
            return;
        }

        variables[varName] = result;
    }

    void handleInput(std::istringstream& stream) {
        std::string varName;
        std::getline(stream, varName);  
        std::cout << "Enter value for " << varName << ": ";
        double input;
        std::cin >> input;
        variables[varName] = input;
        std::cin.ignore();  
    }

    void handleWrite() {
        std::cout << "Enter your code below. Type 'end' to finish writing the program!!!!\n";
        std::string line;
        while (true) {
            std::getline(std::cin, line);
            if (line == "end") {
                break;
            }
            programLines.push_back(line);
        }
        std::cout << "Program written successfully. Type 'gregRUN' to run it!!!!!!!!\n";
    }

    void handleRun() {
        if (programLines.empty()) {
            std::cout << "No program to run. Please write a program first using 'gregWRITE' greg\n";
            return;
        }

        std::cout << "Running program...\n";
        for (const auto& line : programLines) {
            execute(line);
        }

        programLines.clear();
        std::cout << "Program execution complete :fire:\n";
    }
};

int main() {
    the_interpreter interpreter;
    interpreter.run();
    return 0;
}
