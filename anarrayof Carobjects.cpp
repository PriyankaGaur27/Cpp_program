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
    // Create an array of Car objects (size 3 for example)
    Car cars[3];

    // Setting attributes for each car object in the array
    cars[0].setMake("Toyota");
    cars[0].setModel("Corolla");
    cars[0].setYear(2020);

    cars[1].setMake("Honda");
    cars[1].setModel("Civic");
    cars[1].setYear(2021);

    cars[2].setMake("Ford");
    cars[2].setModel("Mustang");
    cars[2].setYear(2022);

    // Display details of each car in the array
    cout << "Car Details:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\nCar " << i + 1 << " details:" << endl;
        cars[i].displayCarDetails();
    }

    return 0;
}
