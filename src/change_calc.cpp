//
// 4.24 LAB: Exact change
// Write a program with total change amount as an integer input, 
// and output the change using the fewest coins, one coin type per line. 
// The coin types are Dollars, Quarters, Dimes, Nickels, and Pennies. 
// Use singular and plural coin names as appropriate, like 1 Penny vs. 2 Pennies.

// Ex: 
//   If the input is: 
//     0 (or less than 0), 
//   the output is: 
//     No change 

// Ex:
//   If the input is:
//     45
//   the output is:
//     1 Quarter
//     2 Dimes 
//

// #include <iostream>
// using namespace std;

// int main() {
//   const int DOLLAR = 100;
//   const int QUARTER = 25;
//   const int DIME = 10;
//   const int NICKEL = 5;
//   const int PENNY = 1;
//   int inputValue;
//   int remainingDollar;
//   int remainingQuarter;
//   int remainingDime;
//   int remainingNickel;
//   int remainingPenny;

//   // cout << "money value in pennies: ";
//   cin >> inputValue;

//   remainingDollar = inputValue / DOLLAR;
//   remainingQuarter = (inputValue % DOLLAR) / QUARTER;
//   remainingDime = ((inputValue % DOLLAR) % QUARTER) / DIME;
//   remainingNickel = (((inputValue % DOLLAR) % QUARTER) % DIME) / NICKEL;
//   remainingPenny = ((((inputValue % DOLLAR) % QUARTER) % DIME) % NICKEL) / PENNY;

//   if (inputValue <= 0) {
//     cout << "No change\n";
//   }
//   else {
//     if (remainingDollar == 1) {
//       cout << remainingDollar <<" Dollar\n";
//     }
//     else if (remainingDollar > 1) {
//       cout << remainingDollar << " Dollars\n";
//     }

//     if (remainingQuarter == 1) {
//       cout << remainingQuarter << " Quarter\n";
//     }
//     else if (remainingQuarter > 1) {
//       cout << remainingQuarter << " Quarters\n";
//     }

//     if (remainingDime == 1) {
//       cout << remainingDime << " Dime\n";
//     }
//     else if (remainingDime > 1) {
//       cout << remainingDime << " Dimes\n";
//     }

//     if (remainingNickel == 1) {
//       cout << remainingNickel << " Nickel\n";
//     }
//     else if (remainingNickel > 1) {
//       cout << remainingNickel << " Nickels\n";
//     }

//     if (remainingPenny == 1) {
//       cout << remainingPenny << " Penny\n";
//     }
//     else if (remainingPenny > 1) {
//       cout << remainingPenny << " Pennies\n";
//     }

//   }
  
//   /* Type your code here. */

//   return 0;
// }

#include <iostream>
using namespace std;

int main() {
    const int DOLLAR = 100;
    const int QUARTER = 25;
    const int DIME = 10;
    const int NICKEL = 5;
    int inputValue;

    cin >> inputValue;

    if (inputValue <= 0) {
        cout << "No change\n";
        return 0;
    }

    int remainingDollar = inputValue / DOLLAR;
    inputValue %= DOLLAR;

    int remainingQuarter = inputValue / QUARTER;
    inputValue %= QUARTER;

    int remainingDime = inputValue / DIME;
    inputValue %= DIME;

    int remainingNickel = inputValue / NICKEL;
    inputValue %= NICKEL;

    int remainingPenny = inputValue;  // No need to divide by 1

    if (remainingDollar > 0) {
        cout << remainingDollar << (remainingDollar > 1 ? " Dollars" : " Dollar") << "\n";
    }
    if (remainingQuarter > 0) {
        cout << remainingQuarter << (remainingQuarter > 1 ? " Quarters" : " Quarter") << "\n";
    }
    if (remainingDime > 0) {
        cout << remainingDime << (remainingDime > 1 ? " Dimes" : " Dime") << "\n";
    }
    if (remainingNickel > 0) {
        cout << remainingNickel << (remainingNickel > 1 ? " Nickels" : " Nickel") << "\n";
    }
    if (remainingPenny > 0) {
        cout << remainingPenny << (remainingPenny > 1 ? " Pennies" : " Penny") << "\n";
    }

    return 0;
}
