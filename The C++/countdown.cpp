#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    
    cout << "Starting the countdown..." << endl;

    
    for (int i = 5; i > 0; --i) {
        
        cout << i << " seconds remaining" << endl;

        
        this_thread::sleep_for(chrono::seconds(1));
    }

    
    cout << "Time's up!" << endl;
}
