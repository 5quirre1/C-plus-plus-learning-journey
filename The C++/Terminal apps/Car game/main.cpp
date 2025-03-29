#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "stuff.hpp"
#include "something.hpp"
#include "void_stuff.hpp"
using namespace std;
int main() {
/*******Object defining*******/
cars carObj;
cars carObj2;
/******Object stuff******/
carObj.name = "Chevy Camaro";
carObj.year = 1966;
carObj.quality = "Good";

carObj2.name = "Porsche 911";
carObj2.year = 1963;
carObj.quality = "Really good";

// Main stuff I think grge
greeting();
carbuying();
}

void greeting() {
cout << "Welcome to greg's famous old car shop place real no scam 2025.\nYou will be very cheap and real cars\n";
cout << "We are now gonna go buy a car now.\n";
carbuying();

}
void carbuying(){
cout << "\n\nWelcome to car place. You will buy car now greg\n";

cout << "Are you ready?\n";
cin >> ready;
if (ready == "yes" ||ready == "Yes"  ||ready == "YES") {
actualcars();
  }
  else if (ready == "no" ||ready == "No" ||ready == "NO" ) {
    cout << "Ok\n\n";
    cout << "*You walk out of the building and get on your 800 year old bike and ride back to your house.\n";
    cout << "When you get home, you get off your 800 year old bike.\nAs soon as you get off, the bike breaks into little pieces.\nYou sigh as you walk into your house. You sit on the couch and turn on the tv, a ad playing. \"Come on down to greg's famous old car shop place real no scam 2025 for cheap car that are no scam.\" You get up and go back to the car store.*\n";
    cout << "\nOh, you again. Well, let's retry.\n";
    greeting();
  }
  else {
    cout << "I'ma take that as a yes\n";
    actualcars();

  }
}

void actualcars() {
cout << "We have good car, so no worry. choose car greg\n";
}
