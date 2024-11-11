#include <iostream>
#include <string>
void adoption() {
    std::string username;
    std::cout << "Welcome to the spoon adoption place greg. Wait, You're not greg, what is your name, random person?\n";
       std::cin >> username;
       if (username == "Greg" || username == "greg") {
           std::cout << "oh, so you are greg, mb\n";
           std::cout << "K, so " << username << ", let's take you over to the spoon viewing area so you can check out the pet spoons";
           
       }
       else {
           std::cout << "K, so " << username << ", let's take you over to the spoon viewing area so you can check out the pet spoons";
       }
     }
     void viewingarea() {
         std::string spoonname;
         std::string buy;
         std::string useroption;
         std::string buy2;
         std::string buy3;
         std::cout << "\n\nWelcome to the viewing area where you will find your pet spoon for life\n";
         std::cout << "-------------------------------------------------------\n";
    std::cout << "There is only one pet spoon left. It's a She and is 7 months old\n";
    std::cout << "Do you want to buy her? She's only $3\n\n";
    std::cout << "You have $800, y/n\n";
    std::cin >> buy;

    if (buy == "y") {
        std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, it's gonna need a name. Put the name you want your spoon to have!\n\n";
        std::cin >> spoonname;
        std::cout << "You have named your spoon " << spoonname << "! Let's get some supplies so that you can take care of your spoon!";
    }
    if (buy == "n") {
        std::cout << "So the thing about that is that you can't say no. You have 2 options. Buy the spoon or quit the game. (Buy or quit)\n\n";
        std::cin >> useroption;
        if (useroption == "Buy" || useroption == "buy") {
            std::cout << "Do you want to buy her? She's only $3\n\n";
    std::cout << "You have $800, y/n\n";
    std::cin >> buy2;
    
    if (buy2 == "y") {
        std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, it's gonna need a name. Put the name you want your spoon to have!\n\n";
        std::cin >> spoonname;
        std::cout << "You have named your spoon " << spoonname << "! Let's get some supplies so that you can take care of your spoon!";
    }
    if (buy2 == "n") {
        std::cout << "Nope, try again.\n\n";
        std::cout << "Do you want to buy her? She's only $3\n\n";
    std::cout << "You have $800, (y)\n";
    std::cin >> buy3;
    }
    
    if (buy3 == "y") {
         std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, it's gonna need a name. Put the name you want your spoon to have!\n\n";
        std::cin >> spoonname;
        std::cout << "You have named your spoon " << spoonname << "! Let's get some supplies so that you can take care of your spoon!";
    }
    }
    
    }
        }
    
         
     
int main() {
std::string what;
std::string ok;


// this is spoon. cause spon is gref
    std::cout << " SSSSS   PPPPP   OOO   OOO   N   N " << std::endl;
    std::cout << "S         P   P  O   O O   O  NN  N " << std::endl;
    std::cout << " SSSSS    PPPPP  O   O O   O  N N N " << std::endl;
    std::cout << "     S    P      O   O O   O  N  NN " << std::endl;
    std::cout << " SSSSS    P       OOO   OOO   N   N \n" << std::endl;
    
    std::cout << "Welcome to Spoon. Say info for what Spoon  is about.\nSay anything else to continue on your adventure of taking care of a spoon rgeg\n";
    std::cin >> what;
   if (what == "info" || what == "Info" || what == "INFO") {
       std::cout << "You're gonna take care of a spoon\n";
       std::cin >> ok;
      adoption();
   }
   else {
       adoption();
   }
    viewingarea();
    return 0;
}
