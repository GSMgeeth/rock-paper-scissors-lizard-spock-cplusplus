/**
* Rock, Paper, Scissors, Lizard, Spock is an extended
* version of the game originally known as Rock, Paper,
* Scissors.
* User can play this game with the computer that
* randomly decides the answer.
**/

#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));

  int computer = rand() % 5 + 1;
  int user = 0;

  std::cout << "====================" << std::endl;
  std::cout << "Rock Paper Scissors!" << std::endl;
  std::cout << "====================" << std::endl;

  std::cout << "1) ✊" << std::endl;
  std::cout << "2) ✋" << std::endl;
  std::cout << "3) ✌️" << std::endl;
  std::cout << "4) 🦎" << std::endl;
  std::cout << "5) 🖖" << std::endl;
  std::cout << "shoot!   > ";
  std::cin >> user;
  std::cout << "computer > " << computer << std::endl << std::endl;

  if (user == 4 && computer == 5) {
    std::cout << "YEAH!!! You won!" << std::endl;
  }
  else if (user == 5 && computer == 4) {
    std::cout << "OH!!! Computer won!" << std::endl;
  }
  else if (user == 3 && computer == 5) {
    std::cout << "OH!!! Computer won!" << std::endl;
  }
  else if (user == 5 && computer == 3) {
    std::cout << "YEAH!!! You won!" << std::endl;
  }
  else if (user == 3 && computer == 4) {
    std::cout << "YEAH!!! You won!" << std::endl;
  }
  else if (user == 4 && computer == 3) {
    std::cout << "OH!!! Computer won!" << std::endl;
  }
  else if (user == 4 && computer == 2) {
    std::cout << "YEAH!!! You won!" << std::endl;
  }
  else if (user == 2 && computer == 4) {
    std::cout << "OH!!! Computer won!" << std::endl;
  }
  else if ((user - computer == 1) || (user - computer == -2) || (user - computer == -3) || (user - computer == 4)) {
    std::cout << "YEAH!!! You won!" << std::endl;
  }
  else if ((user - computer == -1) || (user - computer == 2) || (user - computer == 3) || (user - computer == -4)) {
    std::cout << "OH!!! Computer won!" << std::endl;
  }
  else {
    std::cout << "It's a tie!" << std::endl;
  }
}
