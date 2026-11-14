#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int days = rand() % 12;

    cout << "Days until expiration: "
         << days << endl;

    if (days == 0) {
        cout << "Your subscription has expired.";
    }
    else if (days == 1) {
        cout << "Your subscription expires within a day!"
             << endl;
        cout << "Renew now and save 20%!";
    }
    else if (days <= 5) {
        cout << "Your subscription expires in "
             << days
             << " days"
             << endl;
        cout << "Renew now and save 10%!";
    }

    if (days > 5 &&
        days <= 10) {
        cout << "Your subscription will expire soon. "
             << "Renew now!";
    }
    else if (days > 10) {
        cout << "You have an active subscription.";
    }

    cout << endl;
    return 0;
}
