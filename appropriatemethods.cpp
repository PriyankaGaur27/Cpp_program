#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
private:
    string name;  // Private attribute for name
    int age;      // Private attribute for age

public:
    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Setter for age
    void setAge(int a) {
        age = a;
    }

    // Getter for age
    int getAge() {
        return age;
    }
};

// Derived class Student that inherits from Person
class Student : public Person {
private:
    string studentID;  // Private attribute for student ID

public:
    // Setter for student ID
    void setStudentID(string id) {
        studentID = id;
    }

    // Getter for student ID
    string getStudentID() {
        return studentID;
    }

    // Method to display all information of the student
    void displayInfo() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Student ID: " << getStudentID() << endl;
    }
};

int main() {
    Student s;

    // Set values using setter methods from both Person and Student classes
    s.setName("Alice Smith");
    s.setAge(20);
    s.setStudentID("S12345");

    // Display all information of the student
    cout << "Student Information: " << endl;
    s.displayInfo();

    return 0;
}
