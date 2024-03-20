
#include <iostream>
#include <stdlib.h>
#include <cstdlib>

int main() {
    int user = 0;

    //computer logic
    srand (time(NULL));
    int computer = rand() % 3 + 1;
    


    //console output
    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";
 
    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";
 
    std::cout << "shoot! ";

    //user input
    std::cin >> user;

    //user choice
    if (user == 1) 
        std::cout << "you chose 1: ✊\n";
    else if (user == 2)
        std::cout << "you chose 2: ✋\n";
    else
        std::cout << "you chose 3: ✌️\n";
    
    //computer choice
    if (computer == 1)
        std::cout << "computer chose 1: ✊\n";
    else if (computer == 2)
        std::cout << "computer chose 2: ✋\n";
    else
        std::cout << "computer chose 3: ✌️\n";

    //tie
    if (user == computer) {
        std::cout << "It's a tie!\n";
    }

    //user rock
    if(user == 1) {
        if (computer == 2) {
            std::cout << "You lost!\n";
        }
        if (computer == 3) {
            std::cout << "You won!\n";
        }
    }

    //user paper
    if (user == 2) {
        if (computer == 1) {
            std::cout << "You won!\n";
        }
        if (computer == 3) {
            std::cout << "You lost!\n";
        }
    }

    //user scissors
    if(user == 3) {
        if(computer == 1) {
            std::cout << "You lost!\n";
        }
        if (computer == 2) {
            std::cout << "You won!\n";
        }
    }

    return 0;


}