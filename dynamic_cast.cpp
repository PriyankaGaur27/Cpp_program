#include <iostream>

class Base {
public:
    virtual void show() const {
        std::cout << "Base class" << std::endl;
    }
    virtual ~Base() = default; // Virtual destructor for RTTI
};

class Derived : public Base {
public:
    void show() const override {
        std::cout << "Derived class" << std::endl;
    }
    void derivedMethod() const {
        std::cout << "Method specific to Derived class" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived(); // Base class pointer to Derived object

    // Attempt to downcast to Derived* using dynamic_cast
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        derivedPtr->show();          // Calls Derived::show()
        derivedPtr->derivedMethod(); // Calls Derived::derivedMethod()
    } else {
        std::cout << "Downcast failed!" << std::endl;
    }

    delete basePtr;
    return 0;
}
