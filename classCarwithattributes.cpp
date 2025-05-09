#include <iostream>
#include <string>
using namespace std;

// Class Car
class Car {
private:
    string make;   // Private attribute for car make
    string model;  // Private attribute for car model
    int year;      // Private attribute for car year

public:
    // Setter for car make
    void setMake(string m) {
        make = m;
    }

    // Getter for car make
    string getMake() {
        return make;
    }

    // Setter for car model
    void setModel(string m) {
        model = m;
    }

    // Getter for car model
    string getModel() {
        return model;
    }

    // Setter for car year
    void setYear(int y) {
        year = y;
    }

    // Getter for car year
    int getYear() {
        return year;
    }

    // Method to display car details
    void displayCarDetails() {
        cout << "Car Make: " << getMake() << endl;
        cout << "Car Model: " << getModel() << endl;
        cout << "Car Year: " << getYear() << endl;
    }
};

int main() {
    Car myCar;

    // Setting the attributes using setter methods
    myCar.setMake("Toyota");
    myCar.setModel("Corolla");
    myCar.setYear(2022);

    // Displaying car details using display method
    cout << "Car Details:" << endl;
    myCar.displayCarDetails();

    return 0;
}
