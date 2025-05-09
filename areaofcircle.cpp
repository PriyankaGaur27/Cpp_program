#include <iostream>
#define PI 3.14159

using namespace std;

// Function prototype
double areaOfCircle(double radius);

int main() {
    double r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    double area = areaOfCircle(r);
    cout << "Area of the circle is: " << area << endl;

    return 0;
}

// Function definition
double areaOfCircle(double radius) {
    return PI * radius * radius;
}
