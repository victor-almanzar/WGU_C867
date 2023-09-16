#include <iostream>
#include <string>
using namespace std;

int main () {
    string userEmail;
    size_t atSymbolIndex;
    size_t periodIndex;

    system("clear");
    cout << "Type your email: ";
    cin >> userEmail;

    atSymbolIndex = userEmail.find('@');
    periodIndex = userEmail.rfind('.'); // Find the last occurrence of '.'

    /* IF the index of atSymbolIndex isn't an error
     * AND IF the index of periodIndex isn't an error
     * AND IF the index of atSymbolIndex is lower than periodIndex THEN */
    if (atSymbolIndex != string::npos && periodIndex != string::npos && atSymbolIndex < periodIndex) {
        string userName = userEmail.substr(0, atSymbolIndex);
        string webSite = userEmail.substr(atSymbolIndex + 1, periodIndex - atSymbolIndex - 1);
        string domain = userEmail.substr(periodIndex + 1);  // Extracts the domain (like com, org, etc.)

        cout << "\n\nYour username on " << webSite << " is " << userName << "\n\n\n";
        cout << "Your email domain is: " << domain << endl;

    } else {
        cout << "That is not a valid email format.\n";
    }

    return 0;
}
