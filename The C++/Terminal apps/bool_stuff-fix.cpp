#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

string to_lower(const string& input)
{
    string result = input;
    transform(result.begin(), result.end(), result.begin(),
              [](unsigned char c){ return tolower(c); });
    return result;
}

string question(const string& message, const string& continueMsg) 
{
    while (true) 
    {
        cout << message;
        string input;
        getline(cin, input);
        input.erase(0, input.find_first_not_of(" \t\n\r\f\v"));
        input.erase(input.find_last_not_of(" \t\n\r\f\v") + 1);
        if (!input.empty()) 
        {
            return input;
        } else 
        {
            cout << continueMsg << "\n";
        }
    }
}

void more()
{
    cout << "Put your age and see if old asf\n";
    int myAge = stoi(question("what is ur age", "put an age u stupid"));
    if (myAge >= 18)
    {
        cout << "You're so fucking old\n";
    }
    else
    {
        cout << "not old alert\n";
    }
    cout << "***********************************************\n";
    cout << "Thank you for using cause funsies and I'm learning yayaya";
}

int main()
{
    cout << "True = 1, False = 0\n";
    cout << "22 = 22\n"
              << (22 == 22);
    cout << "\n";
    cout << "22 = 15\n"
              << (22 == 15);
    cout << "\n";
    cout << "14 > 55\n"
              << (14 > 55);
    cout << "\n";
    cout << "55 > 15\n"
              << (55 > 15);
    cout << "\n";
    string am_i_cooking = question("am i cooking with my learning?? (y/n)\n", "answer the queston stupid\n");
    if (to_lower(am_i_cooking) == "y")
    {
        cout << "Slayyyy\n";
    } else
    {
        cout << "meanie....\n";
    }
    string more_plz = question("Wanna see more greg?? (y/n)\n", "answer the question");

    if (to_lower(more_plz) == "y")
    {
        more();
    }
    else
    {
        cout << "No one likes you.";
        exit(888888888);
    }
}
