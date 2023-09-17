#include <iostream>
using namespace std;

int main () {
  // game starts right away
  // you're given yourChoices to choose
  // theres counter to count your victories
  // you type quit to quit

  char yourChoice;

  int myScore = 0;
  int compScore = 0;

  // ENGLISH VERSION
  // string optionMenu =
  //   "Choose the following: \n"
  //   "Press \"1\" for Scissor ✂️\n"
  //   "Press \"2\" for Rock 🪨\n"
  //   "Press \"3\" for Paper 📃\n"
  //   "Press \"q\" to quit 🟥\n"
  //   "Enter your choice: ";
  // string actionString = "Lets start the show! 🥊";
  // string scisPaper = "Scissor ✂️ beat Paper 📃. ";
  // string rockScis = "Rock 🪨 beat Scissor ✂️. ";
  // string paperRock = "Paper 📃 beat Rock 🪨. ";
  // string compScis = "Computer used Scissor ✂️. ";
  // string compRock = "Computer used Rock 🪨. ";
  // string compPaper = "Computer used Paper 📃. ";
  // string won = " You won ✅.";
  // string lose = " You lose ❌.";
  // string tie = "Same items. It's a tie 👔";
  // string scoreBoard = "Your score: " + to_string(myScore) + "\tComputer score: " + to_string(compScore) + "\n\n";

  string optionMenu =
      "Elige una opción: \n"
      "Presiona \"1\" para Tijeras ✂️\n"
      "Presiona \"2\" para Piedra 🪨\n"
      "Presiona \"3\" para Papel 📃\n"
      "Presiona \"q\" para salir 🟥\n"
      "Ingresa tu elección: ";
  string actionString = "¡Que comience el juego! 🥊";
  string scisPaper = "Tijeras ✂️ vence a Papel 📃. ";
  string rockScis = "Piedra 🪨 vence a Tijeras ✂️. ";
  string paperRock = "Papel 📃 vence a Piedra 🪨. ";
  string compScis = "La computadora eligió Tijeras ✂️. ";
  string compRock = "La computadora eligió Piedra 🪨. ";
  string compPaper = "La computadora eligió Papel 📃. ";
  string won = " Ganaste ✅.";
  string lose = " Perdiste ❌.";
  string tie = "Mismos elementos. Es un empate 👔";

  


  srand(static_cast<unsigned int>(time(0)));


  while (yourChoice != 'q') {
    unsigned int compNum = static_cast<unsigned int>((rand() % 3) + 1);

    string scoreBoard = "Tu puntaje: " + to_string(myScore) + "\tPuntaje del computador: " + to_string(compScore) + "\n\n";
    cout << scoreBoard;

    cout << actionString;
    cout << "\n\n";
    cout << optionMenu;
    cin >> yourChoice;
    system("clear");

    // WON CONDITIONS
    if ((yourChoice == '1') && (compNum == 3)) {
      ++myScore;
      actionString = compPaper + scisPaper + won;
    }
    else if ((yourChoice == '2') && (compNum == 1)) {
      ++myScore;
      actionString = compScis + rockScis + won;
    }    
    else if ((yourChoice == '3') && (compNum == 2)) {
      ++myScore;
      actionString = compRock + paperRock + won;
    }
    // LOSE CONDITIONS
    else if ((yourChoice == '3') && (compNum == 1)) {
      ++compScore;
      actionString = compScis + scisPaper + lose;
    }
    else if ((yourChoice == '1') && (compNum == 2)) {
      ++compScore;
      actionString = compRock + rockScis + lose;
    }
    else if ((yourChoice == '2') && (compNum == 3)) {
      ++compScore;
      actionString = compPaper + paperRock + lose;
    }
    else {
      actionString = tie;
    }
  }

  return 0;
}
