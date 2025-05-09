#include <iostream>
#include <cmath>  // For M_PI or use your own PI definition
using namespace std;

// Overloaded function to calculate the area of a circle
double area(double radius) {
    return M_PI * radius * radius;
}

// Overloaded function to calculate the area of a rectangle
double area(double length, double width) {
    return length * width;
}

// Overloaded function to calculate the area of a triangle
double area(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}

int main() {
    double r, l, w, b, h;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of Circle: " << area(r) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> l >> w;
    cout << "Area of Rectangle: " << area(l, w) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of Triangle: " << area(b, h, true) << endl;

    return 0;
}
