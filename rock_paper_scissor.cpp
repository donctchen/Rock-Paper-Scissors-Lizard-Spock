/*
Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors.
*/

#include <iostream>
#include <stdlib.h>

int main(){
  srand (time(NULL));
  int computer = rand() %3 + 1;
  int user = 0;
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n"; 
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n"; 
  std::cout << "shoot! ";
  std::cin >> user;  

  if (user > 3 || user < 1){
    std::cout << "please enter 1~3";
    return 0;
  }

  if (user == 1){
    std::cout << "you choose ✊\n";    
  } else if (user == 2){
    std::cout << "you choose ✋\n";
  } else {
    std::cout << "you choose ✌️\n";
  }

  if (computer == 1){
    std::cout << "computer choose ✊\n";    
  } else if (computer == 2){
    std::cout << "computer choose ✋\n";
  } else {
    std::cout << "computer choose ✌️\n";
  }

  if (computer == user){
    std::cout << "it's a tie!\n";
    return 0;
  }
   

  if (computer == 1){
    if (user == 2){
      std::cout << "you won! woohoo!\n";
    } else if (user == 3){
      std::cout << "you lost! booooo!\n";
    }
  } else if (computer == 2){
    if (user == 1){
      std::cout << "you lost! booooo!\n";
    } else if (user == 3){
      std::cout << "you won! woohoo!";
    }
  } else if (computer == 3){
    if (user == 1){
      std::cout << "you won! woohoo!";
    } else if (user == 2){
      std::cout << "you lost! booooo!\n";
    }
  }

}
