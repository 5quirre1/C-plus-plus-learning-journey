#include <iostream>
using namespace std;
 
enum Level {
  GREG1 = 1,
  GREG2,
  GREG3,
};

int main() {
  enum Level myVar = GREG2;

  switch (myVar) {
    case 1:
      cout << "sigma";
      break;
    case 2:
      cout << "skibidi";
      break;
    case 3:
      cout << "rizzler";
      break;
  }
  return 0;
}
