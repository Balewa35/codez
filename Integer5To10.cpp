
#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number;

    while (true) {
        cout << "Enter an integer between 5 and 10: ";

        if (!(cin >> number)) {
            cout << "Invalid input. Please enter an integer."
                 << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (number >= 5 && number <= 10) {
            break;
        }

        cout << "Your input must be between 5 and 10."
             << endl;
    }

    cout << "Your input value (" << number
         << ") has been accepted." << endl;

    return 0;
}
