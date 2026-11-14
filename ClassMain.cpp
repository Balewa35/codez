#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    // Create an instance of the Rectangle class
    Rectangle rect;

    float userLength, userWidth;

    // Prompt the user for input via the console
    cout << "Enter the length of the rectangle: ";
    cin >> userLength;

    cout << "Enter the width of the rectangle: ";
    cin >> userWidth;

    // Use the accessor/mutator methods to assign values
    rect.setLength(userLength);
    rect.setWidth(userWidth);

    // Output the area of the rectangle calculated by the member function
    cout << "The area of the rectangle is: " << rect.calculateArea() << endl;

    return 0;
}