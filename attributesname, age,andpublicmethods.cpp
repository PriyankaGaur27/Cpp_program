#include <iostream>
#include <string>
using namespace std;

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

int main() {
    Person p;

    // Set values using setter methods
    p.setName("John Doe");
    p.setAge(30);

    // Get values using getter methods
    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    return 0;
}
