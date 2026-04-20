// include the Main stuff
#include <iostream>
#include <string>
#include <cstdlib>

// Main int
int main() {
    // Main Values
    std::string choice;
    std::string yesorno;
    std::string userinp;

    system("clear");

    std::cout << "Hello! How are you feeling?\n";
    std::cin >> choice;

    if (choice == "good") {
        std::cout << "Amazing to hear!\n";
        std::cout << "Do you want to explain why you had a good day?\n";
        std::cin >> yesorno;
        if (yesorno == "yes") {
            std::cin >> userinp;
            std::cout << "That's great to hear! I'm glad you had a good day.\n";
        }
        if (yesorno == "no") {
            std::cout << "Okay, well continue enjoying your day!\n";
        }
    }
    if (choice == "bad") {
        std::cout << "I'm sorry to hear that.\n";
        std::cout << "Do you want to explain why you had a bad day?\n";
        std::cin >> yesorno;
        if (yesorno == "yes") {
            std::cin >> userinp;
            std::cout << "I'm so sorry to hear that.. I hope your day gets better soon!\n";
            
        }
        if (yesorno == "no") {
            std::cout << "I understand. Sometimes it's better not to talk about it.\n";
        }
    }
}