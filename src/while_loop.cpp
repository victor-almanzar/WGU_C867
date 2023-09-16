#include <iostream>
using namespace std;

int main() {
   int userNum;
   int i;

   cout << "give me a number: ";
   cin >> userNum;

   for (i = 0 ; i <= userNum; ++i) {
      for (int j = 0; j < i; ++j) {
         cout << ' ';
         
      }
      cout << i << "\n";
   }
}
