#include <iostream>
#include <string>
#include <cstdlib>
std::string spoonname;

void adoption() {
    std::string username;
    std::cout << "\n-------------------------------------------------------\n";
    std::cout << "Dominic: Welcome to the spoon adoption place, I am the granpapa of all the\nspoons here, greg. Wait, You're not greg, what is your name, random person?\n";
    std::cout << "You: ";
       std::cin >> username;
       if (username == "Greg" || username == "greg") {
           std::cout << "oh, so you are greg, mb\n";
           std::cout << "Dominic: K, so " << username << ", let's take you over to the spoon viewing area so you can check out the pet spoons";
           
       }
       else {
           std::cout << "K, so " << username << ", let's take you over to the spoon viewing area so you can check out the pet spoons";
       }
     }

     void viewingarea() {
         std::string buy;
         std::string useroption;
         std::string buy2;
         std::string buy3;
         std::cout << "\n\n Dominic: Welcome to the viewing area where you will find your pet spoon for life\n";
         std::cout << "-------------------------------------------------------\n";
    std::cout << "Dominic: There is only one pet spoon left. It's a She and is 7 months old\n";
    std::cout << "Dominic: Do you want to buy her? She's only $3\n\n";
    std::cout << "You have $800, y/n\n";
    std::cout << "You: ";
    std::cin >> buy;

    if (buy == "y" || buy == "yes" || buy == "Yes") {
        std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, you're gonna need some supplies so that you can take care of your spoon!\n\n";
    }
    if (buy == "n" || buy == "no" || buy == "No") {
        std::cout << "So the thing about that is that you can't say no. You have 2 options. Buy the spoon or quit the game. (Buy or quit)\n\n";
        std::cout << "You: ";
        std::cin >> useroption;
        if (useroption == "quit" || useroption == "Quit") {
        std::cout << "No one likes you.";
        adoption();
    }
        if (useroption == "Buy" || useroption == "buy") {
            std::cout << "Do you want to buy her? She's only $3\n\n";
    std::cout << "You have $800, y/n\n";
    std::cout << "You: ";
    std::cin >> buy2;
        }
    }
        
    
    if (buy2 == "y" || buy2 == "yes" || buy2 == "Yes") {
        std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, you're gonna need some supplies so that you can take care of your spoon!\n\n";
    }
    if (buy2 == "n" || buy2 == "no" || buy2 == "No") {
        std::cout << "Nope, try again.\n\n";
        std::cout << "Dominic: Do you want to buy her? She's only $3\n\n";
    std::cout << "You have $800, (y)\n";
    std::cout << "You: ";
    std::cin >> buy3;
    }
    
    if (buy3 == "y" || buy3 == "yes" || buy3 == "Yes") {
         std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, you're gonna need some supplies so that you can take care of your spoon!\n\n";
    }
    }
    
    
    void store_at_start() {
        double money;
        double moneybefore;
        moneybefore = 797;
        std::string foodbuy;
        std::string essentialsbuy;
        std::cout << "\n\nWelcome to the Spoon pet shop! This place will have everything you'll ever need to take care of your spoon! We also have a deal on so it's your lucky day!\n\n";
        std::cout << "We'll start off by buying some food for your pet spoon. Buy all of them by typing 'All'\n\n";
        std::cout << "School pizza      Bread       Watermelon\n";
        std::cout << "     $3            $1             $3            \n";
        std::cout << "You: ";
        std::cin >> foodbuy;
        if (foodbuy == "all" || foodbuy == "All") {
            std::cout  << "You have bought school pizza, Bread, Wathermelon!\n";
            money = moneybefore - 7;
            std::cout << "You now have $" << money << " left!";
            
        }
        else {std::cout << "-------------------------------------------------------\n";
            std::cout << "I think you meant to say 'All' but that was too hard for you. Try again.\n";
            std::cout << "-------------------------------------------------------";
            std::cout << "\n\nWelcome to the Spoon pet shop! This place will have everything you'll ever need to take care of your spoon! We also have a deal on so it's your lucky day!\n\n";
        std::cout << "We'll start off by buying some food for your pet spoon. Buy all of them by typing 'All'\n\n";
        std::cout << "School pizza      Bread       Watermelon\n";
        std::cout << "     $3            $1             $3            \n";
        std::cout << "You: ";
        std::cin >> foodbuy;
if (foodbuy == "all" || foodbuy == "All") {
            std::cout  << "You have bought school pizza, Bread, Wathermelon!\n";
            money = moneybefore - 7;
            std::cout << "You now have $" << money << " left!";
            
        }
        }
        std::cout << "\n-------------------------------------------------------";
        std::cout << "\n\nGreat! Now that you have food to feed your pet spoon, let's get some essentials that will make your life and your spoon's life easier!\n";
        std::cout << "I recommend buy all of these. Type 'All'.\n\n";
        std::cout << "Yummy oil  Dishwasher pods   Collar   Bed\n";
        std::cout << "   $3            $5            $3     $9\n\n";
        std::cout << "You: ";
        std::cin >> essentialsbuy;
    
        if (essentialsbuy == "all" || essentialsbuy == "All") {
            std::cout << "You have bought Yummy oil, Dishwasher pods, collar and a bed!\n";
            money = moneybefore - 20;
            std::cout << "You now have $" << money << " left!\n";
        }
        else {
            std::cout << "-------------------------------------------------------\n";
            std::cout << "I think you meant to say 'All' but that was too hard for you. Try again.\n";
             std::cout << "-------------------------------------------------------";
        std::cout << "\n\nGreat! Now that you have food to feed your pet spoon, let's get some essentials that will make your life and your spoon's life easier!\n";
        std::cout << "I recommend buy all of these. Type 'All'.\n\n";
        std::cout << "Yummy oil  Dishwasher pods   Collar   Bed\n";
        std::cout << "   $3            $5            $3     $9\n\n";
        std::cout << "You: ";
        std::cin >> essentialsbuy;
        if (essentialsbuy == "all" || essentialsbuy == "All") {
            std::cout << "You have bought Yummy oil, Dishwasher pods, collar and a bed!\n";
            money = moneybefore - 20;
            std::cout << "You now have $" << money << " left!\n";
        }
        
        }
         std::cout << "-------------------------------------------------------";
        std::cout << "\nCongrats! You have everything you'll need for your pet spoon! The Store is always open for you to buy more supplies!\nI hope you enjoy your time as a new spoon owner!!";
    }
    
    void game(const std::string &spoonname) {
    std::cout << spoonname;
}
    void tutoriel() {
        int xp = 0;
        std::string call_tot;
        std::string options;
        std::string food_options;
        std::string feed;
        std::string understand;


         std::cout << "\n-------------------------------------------------------";
          std::cout << "\nYou have brought your spoon home! While she explores the house, you need to give her a name!\nWhat should their name be?\n";
          std::cout << "You: ";
          std::cin >> spoonname;
          std::cout << "\nYour spoon has been named " << spoonname << "!\n";
          std::cout << "-------------------------------------------------------\n";
          std::cout << spoonname << " walks around her new house.\n";
        // learning how to call your spoon regegege 
          std::cout << "-------------------------------------------------------\n";
          std::cout << "You can call your spoon over by typing '" << spoonname << "'! Try it out!\n";
          std::cout << "-------------------------------------------------------\n";
          std::cout << "You: ";
          std::cin >> call_tot;
          if (call_tot == spoonname) {
            std::cout << spoonname << " walked over to you!\n";
            std::cout << "-------------------------------------------------------\n";
            std::cout << "Good job! Now that we know how to call our spoon, let's learn how to feed our spoon!\n";
          }
          else {
            std::cout << "-------------------------------------------------------\n";
            std::cout << "Remember, you have to call your spoon by typing '" << spoonname << "'\n";
            std::cout << "-------------------------------------------------------\n";
            std::cout << "You: ";
            std::cin >> call_tot;
            if (call_tot == spoonname) {
              std::cout << spoonname << " walked over to you!\n";
            }
            std::cout << "Good job! Now that we know how to call our spoon, let's learn how to feed our spoon!\n";
            std::cout << "-------------------------------------------------------\n";
          }
        // learning how to feed  
          std::cout << "-------------------------------------------------------\n";
          std::cout << "To give food to your spoon, you would call your spoon like normal but you would type 'Feed'! Try it out!\n";
          std::cout << "-------------------------------------------------------\n";
          std::cout << "You: ";
          std::cin >> call_tot;
          if (call_tot == spoonname) {
            std::cout << spoonname << " walks up to you!\n";
          }
          else {
              std::cout << "-------------------------------------------------------\n";
              std::cout << "Remember, you have to call your spoon by typing '" << spoonname << "' and then say 'Feed'!\n";
              std::cout << "-------------------------------------------------------\n";
              std::cout << "To give food to your spoon, you would call your spoon like normal but you would type 'Feed'! Try it out!\n";
              std::cout << "-------------------------------------------------------\n";
              std::cout << "You: ";
          std::cin >> call_tot;
          if (call_tot == spoonname) {
            std::cout << spoonname << " walks up to you!\n";
            }
          }
          std::cout << "You: ";
          std::cin >> options;
            if (options == "Feed") {
                std::cout << "-------------------------------------------------------\n";
                std::cout << "Good job! Let's give our spoon some bread! Type 'Bread'\n";
                std::cout << "-------------------------------------------------------\n";
                std::cout << "School pizza      Bread       Watermelon\n";
                std::cout << "You: ";
                std::cin >> food_options;
                if(food_options == "Bread") {
                std::cout << "The Spoon ate the bread! She thought it was good!\n";
                }
            }
            else {
                std::cout << "-------------------------------------------------------\n";
                std::cout << "Make sure to Type 'Feed' and not 'feed'!\n";
                std::cout << "-------------------------------------------------------\n";
                std::cout << "You: ";
                std::cin >> options;
                if (options == "Feed") {
                std::cout << "-------------------------------------------------------\n";
                std::cout << "Good job! Let's give our spoon some bread! Type 'Bread'\n";
                std::cout << "-------------------------------------------------------\n";
                std::cout << "School pizza      Bread       Watermelon\n";
                std::cin >> food_options;
                if(food_options == "Bread") {
                std::cout << "The Spoon ate the bread! She thought it was good!\n";
                }
            }
            }
                std::cout << "-------------------------------------------------------\n";
                std::cout << "Good Job!! Our Spoon is now full from one slice of bread (ig)\n";
              // learning how to give your pretty spoon a bath cause stinky
                
                std::cout << "Now that we know how to feed our spoon, let's learn how to give our spoon a bath!\n";
                
                std::cout << "To give your spoon a bath, call your spoon and say 'Bath'! Try it out!\n";
                std::cout << "-------------------------------------------------------\n";
                std::cout << "You: ";
                std::cin >> call_tot;
                if (call_tot == spoonname) {
                    std::cout << spoonname << " walks up to you!\n";
                }
                else {
              std::cout << "-------------------------------------------------------\n";
              std::cout << "Remember, you have to call your spoon by typing '" << spoonname << "' and then say 'Bath'!\n";
              std::cout << "-------------------------------------------------------\n";
              std::cout << "You: ";
              std::cin >> call_tot;
              if (call_tot == spoonname) {
                    std::cout << spoonname << " walks up to you!\n";
                    std::cin >> options;
                
                }
                }
                std::cout << "You: ";
                std::cin >> options;
                if (options == "Bath") {
                    std::cout << "You bring " << spoonname << " to the sink.\nYou put some of the Dishsoap that you bought fron the pet shop on her.\nYou start to clean " << spoonname << " until she is completly clean!";
                }
                else {
              std::cout << "-------------------------------------------------------\n";
              std::cout << "Remember to spell it as 'Bath' and not 'bath'!\n";
              std::cout << "-------------------------------------------------------\n";
              std::cout << "You: ";
              std::cin >> options;
                if (options == "Bath") {
                    std::cout << "You bring " << spoonname << " to the sink.\nYou put some of the Dishsoap that you bought fron the pet shop on her.\nYou start to clean " << spoonname << " until she is completly clean!\n";
                }
                }
                std::cout << "-------------------------------------------------------\n";
                std::cout << "Your pet spoon is bored. Let's take your pet spoon on a walk! To take your pet on a walk, call your pet and Enter 'Walk'\n";
                std::cout << "-------------------------------------------------------\n";
                std::cout << "You : ";
                std::cin >> call_tot;
                              if (call_tot == spoonname) {
                    std::cout << spoonname << " walks up to you!\n";
                    std::cout << "You: ";
                    std::cin >> options;
                              }
                              else {
                                 std::cout << "Erm, you need to enter your pet's spoon name\n";
                                if (call_tot == spoonname) {
                                std::cout << spoonname << " walks up to you!\n";
                                std::cout << "You: ";
                                std::cin >> options;
                              }
                              }
                                    if (options == "Walk") {
                        std::cout << "You're going on a walk with your pet, " << spoonname << "!! Yay!\n";
                        std::cout << spoonname << " meets pet fork. It seems like they're having fun!\n";
                        std::cout << spoonname << " now has a friend, Yayayaya!\n";
                        xp = xp + 10;
                        std::cout << "-------------------------------------------------------\n";
                        std::cout << "+ " << xp << " xp. You now have " << xp << " xp!";
                
                    }
                std::cout << "\nCongrats, you just did the tutorial! You have learned all the basics on how to take care of your spoon!\n";
                std::cout << "Do You understand everything? (Yes or no)\n";
                std::cout << "-------------------------------------------------------\n";
                std::cout << "You: ";
                std::cin >> understand;
                if (understand == "Yes" || understand == "yes") {
                    std::cout << "Good! Let's start this!\n";
                }
                if (understand == "No" || understand == "no") {
                    tutoriel();
                }
                std::cout << "-------------------------------------------------------\n";
            }
            void game() {
                std::string food_options;
                std::string options;
                std::cout << spoonname << " walks around the house, exploring the every part of the house\n";
                std::cin >> options;
                // the feed stuff for options
                if (options == "feed" || options == "Feed") {
                    std::cout << "-------------------------------------------------------\n";
                std::cout << "School pizza      Bread       Watermelon\n";
                }
                std::cin >> food_options;
                if (food_options == "School Pizza" || food_options == "school pizza" || food_options == "School pizza" ||
                food_options == "1") {
                    std::cout << spoonname << " ate the School pizza! Gross..";
                }
                if (food_options == "Bread" || food_option == "bread" ||
                food_options == "2") {
                    std::cout << spoonname << " ate the Bread!  yummers";
                }
                }
            
           
                
                
            

    int main() {
std::string what;
std::string ok;


// this is spoon. cause spon is gref
    std::cout << " SSSSS    PPPPP   OOO   OOO   N   N " << std::endl;
    std::cout << "S         P   P  O   O O   O  NN  N " << std::endl;
    std::cout << " SSSSS    PPPPP  O   O O   O  N N N " << std::endl;
    std::cout << "     S    P      O   O O   O  N  NN " << std::endl;
    std::cout << " SSSSS    P       OOO   OOO   N   N " << std::endl;
    std::cout << "Made by 5quirre1 and Nomaakip\n"; 
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Welcome to Spoon. Say 'Info' for what Spoon is about.\nSay anything else to continue on your adventure of taking care of a spoon rgeg\n";
    std::cin >> what;
   if (what == "info" || what == "Info" || what == "INFO") {
    std::cout << "-------------------------------------------------------";
       std::cout << "\nThis game is about taking care of a pet spoon. Don't ask why cause like, it's very useful lmao\nSome stuff that is going to be updated in later updates:\n\nA saving system\nRandom events when you like use the command 'Check' or something\nRandom cool stuff\nDo You want to know some bugs that have been found? (Say 'Bugs')\n";
       
       std::cin >> ok;
       if (ok == "why" || ok == "Why") {
        std::cout << "I just said to not ask vro\n\n";
       }
       if (ok == "skibidi" || ok == "SKIBIDI" || ok == "Skibidi") {
        std::cout << "Peak";
       }
   }
   if (what == "No" || what == "no") {
    std::cout << "Ok, geez";
   }
   if (ok == "Bugs" || ok == "bugs") {
    std::cout << "-------------------------------------------------------";
       std::cout << "\nIf you spam the game, it'll bug out lmao\nThat's all we really know greg\n";
   }
   adoption();   
    viewingarea();
    store_at_start();
    tutoriel();
    game();
    return 0;
}
