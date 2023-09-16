#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   const double AGE_MULTIPLIER = 0.2757;
   const double WEIGHT_MULTIPLIER = 0.03295;
   const double HEARTRATE_MULTIPLIER = 1.0781;
   const double CAL_NEGATION = 75.4991;
   const double TIME_DIVISOR = 8.368;
   
   int yearsOfAge;
   int pounds;
   int beatsPerMin;
   int minutes;
   
   cin >> yearsOfAge;
   cin >> pounds;
   cin >> beatsPerMin;
   cin >> minutes;

   cout << fixed << setprecision(2);
   cout << "Calories: ";
   cout << ((yearsOfAge * AGE_MULTIPLIER) + 
            (pounds * WEIGHT_MULTIPLIER) +
            (beatsPerMin * HEARTRATE_MULTIPLIER) - 
            CAL_NEGATION) * 
            (minutes / TIME_DIVISOR);
   cout << " calories";
   return 0;
}
//--------------------------------------//
