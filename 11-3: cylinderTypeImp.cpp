#include <iostream>
#include "cylinderType.h"

const double PI = 3.14159;

cylinderType::cylinderType(double r, double h) : circleType(r) {
    setHeight(h);
}

void cylinderType::setHeight(double h) {
    if (h >= 0)
        height = h;
    else
        height = 0;
}

double cylinderType::getHeight() {
    return height;
}

double cylinderType::volume() {
    return area() * height;
}

double cylinderType::surfaceArea() {
    return 2 * area() + circumference() * height;
}

void cylinderType::print() {
    std::cout << "Cylinder properties:" << std::endl;
    circleType::print();  // Call the print function of the base class
    std::cout << "Height: " << height << std::endl;
    std::cout << "Volume: " << volume() << std::endl;
    std::cout << "Surface Area: " << surfaceArea() << std::endl;
}
