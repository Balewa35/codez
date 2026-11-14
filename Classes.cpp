#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor initializing variables to zero
    Rectangle();

    // Destructor (does nothing for now)
    ~Rectangle();

    // Mutator methods (setters) for assigning values
    void setLength(float l);
    void setWidth(float w);

    // Accessor methods (getters) for retrieving values
    float getLength() const;
    float getWidth() const;

    // Member function to calculate and return the area
    float calculateArea() const;
};

#endif // RECTANGLE_H