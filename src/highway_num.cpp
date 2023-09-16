/* 4.23 LAB: Interstate highway numbers
 *
 * Primary U.S. interstate highways are numbered 1-99. 
 * Odd numbers (like the 5 or 95) go north/south, and evens (like the 10 or 90) go east/west. 
 * Auxiliary highways are numbered 100-999, and service the primary highway indicated by the rightmost two digits. 
 * Thus, I-405 services I-5, and I-290 services I-90. 
 * 
 * Note: 200 is not a valid auxiliary highway because 00 is not a valid primary highway number.
 * 
 * 1. Given a highway number, indicate whether it is a primary or auxiliary highway.
 * 2. If auxiliary, indicate what primary highway it serves. 
 * 3. Also indicate if the (primary) highway runs north/south or east/west.
 * 
 * Ex: If the highwayNumber is: 90
 * the output is: I-90 is primary, going east/west.
 * 
 * Ex: If the highwayNumber is: 290
 * the output is: I-290 is auxiliary, serving I-90, going east/west.
 * 
 * Ex: If the highwayNumber is: 0
 * the output is: 0 is not a valid interstate highway number. 
 * 
 * Ex: If the highwayNumber is: 200
 * the output is: 200 is not a valid interstate highway number.
 * 
 */

#include <iostream>
using namespace std;

int main() {

int highwayNumber;

cin >> highwayNumber;

if (highwayNumber >= 1 && highwayNumber <= 99) {
    cout << "I-" << highwayNumber << " is primary, going " << ((highwayNumber % 2 == 0) ? "east/west." : "north/south.") << endl;
}
else if (highwayNumber >= 101 && highwayNumber <= 999 && highwayNumber % 100 != 0) {
    int primaryHighway = highwayNumber % 100;
    cout << "I-" << highwayNumber << " is auxiliary, serving I-" << primaryHighway << ", going " << ((primaryHighway % 2 == 0) ? "east/west." : "north/south.") << endl;
}
else {
    cout << highwayNumber << " is not a valid interstate highway number." << endl;
}

  return 0;
}
