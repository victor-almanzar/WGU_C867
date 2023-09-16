#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
   unsigned int pikaVar;
   unsigned int userGuess;

   srand(static_cast<unsigned int>(time(0)));
   pikaVar = static_cast<unsigned int>((rand() % 10) + 1);
   cout << "\nGuess from 1 to 10: ";
   cin >> userGuess;

   if (userGuess > 10 || userGuess < 1) {
      cout << "Thats not 1 - 10 you dummy\n";
   }
   else {
         cout << "You're               ";
        switch(userGuess) {
      case 1:
         cout << "Bulbasaur 🧅\n";
         break;
      case 2:
         cout << "Charmander 🔥\n";
         break;
      case 3:
         cout << "Squirtle 💦\n";
         break;
      case 4:
         cout << "Caterpie 🐛\n";
         break;
      case 5:
         cout << "Pidgey 🐦\n";
         break;
      case 6:
         cout << "Rattata 🐀\n";
         break;
      case 7:
         cout << "Ekans 🐍\n";
         break;
      case 8:
         cout << "Pikachu ⚡️\n";
         break;
      case 9:
         cout << "Sandshrew ⏳\n";
         break;
      case 10:
         cout << "Jigglypuff 🎶\n";
         break;
   }

      cout << "You're enemy is      ";
      switch(pikaVar) {
      case 1:
         cout << "Bulbasaur 🧅\n";
         break;
      case 2:
         cout << "Charmander 🔥\n";
         break;
      case 3:
         cout << "Squirtle 💦\n";
         break;
      case 4:
         cout << "Caterpie 🐛\n";
         break;
      case 5:
         cout << "Pidgey 🐦\n";
         break;
      case 6:
         cout << "Rattata 🐀\n";
         break;
      case 7:
         cout << "Ekans 🐍\n";
         break;
      case 8:
         cout << "Pikachu ⚡️\n";
         break;
      case 9:
         cout << "Sandshrew ⏳\n";
         break;
      case 10:
         cout << "Jigglypuff 🎶\n";
         break;
      }
   }
   
   cout << "\n\n";

   return 0;
}
