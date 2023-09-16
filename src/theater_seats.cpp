#include <iostream>
using namespace std;

int main() {
  int numRows;
  int numColumns;
  int currentRow;
  int currentColumn;
  char currentColumnLetter;
  string spaceAmount = "  ";

  cout << "How many rows does this theater have: ";
  cin >> numRows;
  cout << "How many columns does this theater have: ";
  cin >> numColumns;
  
  for (currentRow = 1; currentRow <= numRows; ++currentRow) {
    for (currentColumn = 1; currentColumn <= numColumns; ++currentColumn) {
        currentColumnLetter = static_cast<char>(currentColumn +64);
        if (currentRow >= 10) {
          spaceAmount = " ";
        }
        cout << currentRow << currentColumnLetter << spaceAmount;
    }
    cout << "\n";
  }
  
  cout << endl;

  return 0;
}
