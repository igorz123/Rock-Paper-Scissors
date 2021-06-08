/* Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors. */

#include <iostream>
#include <stdlib.h>
#include <time.h>
int main() {
 int user,computer;
 srand(time(NULL));
computer = rand() % 3 + 1;

 std::cout << "rock, paper or scissors? \n";
 std::cout << "1) rock\n";
 std::cout << "2) paper\n";
 std::cout << "3) scissors\n";
 std::cin >> user;

 if(user == 1){
   if(computer == 1){
     std::cout << "Computer chose rock.\n";
     std::cout << "It's a tie!\n";
   } else if(computer == 2){
     std::cout << "Computer chose paper.\n";
     std::cout << "You lose!\n";
   } else if(computer == 3){
     std::cout << "Computer chose scissors\n";
     std::cout << "You win!\n";
   }
 } else if(user == 2){
    if(computer == 1){
      std::cout << "Computer chose rock.\n";
      std::cout << "You win!\n";
    } else if(computer == 2){
      std::cout << "Computer chose paper.\n";
      std::cout << "It's a tie\n";
    } else if(computer == 3){
      std::cout << "computer chose scissors.\n";
      std::cout << "You lose!\n";
    }
} else if(user == 3){
  if(computer == 1){
    std::cout << "Computer chose rock.\n";
    std::cout << "You lose!\n";
  } else if(computer == 2){
    std::cout << "Computer chose paper.\n";
    std::cout << "You win!\n";
  } else if(computer == 3){
    std::cout << "Computer chose scissors.\n";
    std::cout << "It's a tie!\n";
  }
}

}
