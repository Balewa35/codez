#include "Rectangle.h"

// Default constructor implementation
Rectangle::Rectangle() {
    length = 0.0f;
    width = 0.0f;
}

// Destructor implementation
Rectangle::~Rectangle() {
    // Does nothing for now
}

// Assigns value to length
void Rectangle::setLength(float l) {
    length = l;
}

// Assigns value to width
void Rectangle::setWidth(float w) {
    width = w;
}

// Retrieves length
float Rectangle::getLength() const {
    return length;
}

// Retrieves width
float Rectangle::getWidth() const {
    return width;
}

// Calculates and returns the area
float Rectangle::calculateArea() const {
    return length * width;
}