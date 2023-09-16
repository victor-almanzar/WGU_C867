#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;
 
int main() {
  unsigned int randTimeOne;
  unsigned int randTimeTwo;
  unsigned int randTimeThree;

  srand(static_cast<unsigned int>(time(0)));
 
  randTimeOne = static_cast<unsigned int>((rand() % 10) + 1);
  randTimeTwo = static_cast<unsigned int>((rand() % 10) + 1);
  randTimeThree = static_cast<unsigned int>((rand() % 10) + 1);

  cout << randTimeOne << endl;
  cout << randTimeTwo << endl;
  cout << randTimeThree << endl;
}
