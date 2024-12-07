#include <iostream>
#include <string>
#include <random>
#include <thread>
#include <chrono>

std::string textToType;

char generateKeystroke() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<int> dis(97, 122);
    return static_cast<char>(dis(gen));
}

void monkeytype() {
    int correctKeystrokes = 0;
    int incorrectKeystrokes = 0;
    int attempts = 0;

    std::cout << "Monkey typing simulator started..." << std::endl;
    std::cout << "Text to type: " << textToType << std::endl;

    while (true) {
        char keystroke = generateKeystroke();
        std::cout << "Keystroke " << attempts + 1 << ": " << keystroke << std::endl;

        if (keystroke == textToType[attempts % textToType.length()]) {
            std::cout << " Correct!" << std::endl;
            correctKeystrokes++;
        } else {
            std::cout << " Incorrect. Expected: " << textToType[attempts % textToType.length()] << std::endl;
            incorrectKeystrokes++;
        }

        int accuracy = (correctKeystrokes * 100) / (attempts + 1);
        std::cout << "Current accuracy: " << accuracy << "%" << std::endl;
        std::cout << std::endl;

        attempts++;

        if (correctKeystrokes == textToType.length()) {
            std::cout << "The monkey got it!!!!! The word was: " << textToType << std::endl;
            break;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(160));
    }

    std::cout << "Simulation finished." << std::endl;
    std::cout << "Correct keystrokes: " << correctKeystrokes << std::endl;
    std::cout << "Incorrect keystrokes: " << incorrectKeystrokes << std::endl;

    int finalAccuracy = (correctKeystrokes * 100) / attempts;
    std::cout << "Final accuracy: " << finalAccuracy << "%" << std::endl;
}

void word_choose() {
    std::cout << "Choose the word you want the monkey to find!!!\n";
    std::cin >> textToType;
    monkeytype();
}

int main() {
    std::string start_menu;
    std::cout << "Welcome to the weird monkey type sim thing!!!! Say 'start' to start the game. type 'exit' to exit the game!!!\n";
    std::cin >> start_menu;
    if (start_menu == "start" || start_menu == "Start" || start_menu == "START") {
        word_choose();
        return 0;
    }
    else if (start_menu == "exit" || start_menu == "Exit" || start_menu == "EXIT") {
        exit(69);
    }
    else {
        std::cout << "Can you repeat that?\n";
        main();
    }
    return 0;
}
