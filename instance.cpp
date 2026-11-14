#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    // --- First Rectangle Instance (using default constructor and mutators) ---
    Rectangle rect1;
    float userLength1, userWidth1;

    cout << "--- Rectangle 1 ---" << endl;
    cout << "Enter the length of the rectangle: ";
    cin >> userLength1;

    cout << "Enter the width of the rectangle: ";
    cin >> userWidth1;

    rect1.setLength(userLength1);
    rect1.setWidth(userWidth1);

    cout << "The area of Rectangle 1 is: " << rect1.calculateArea() << endl;
    cout << endl;

    // --- Second Rectangle Instance (using the overloaded constructor) ---
    float userLength2, userWidth2;

    cout << "--- Rectangle 2 (Overloaded Constructor) ---" << endl;
    cout << "Enter the length of the rectangle: ";
    cin >> userLength2;

    cout << "Enter the width of the rectangle: ";
    cin >> userWidth2;

    // Create the second instance and initialize via overloaded constructor
    Rectangle rect2(userLength2, userWidth2);

    // Output the area of the newly created rectangle object
    cout << "The area of Rectangle 2 is: " << rect2.calculateArea() << endl;

    return 0;
}