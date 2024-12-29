#include <iostream>
#include <string>

using namespace std;

class Animal {
    public:
        string name;
        int age;

         virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << name << " barks!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << name << " meows!" << endl;
    }
};

int main () {

    Dog dog;
    dog.name = "buddy";
    dog.age = 5;

    Cat cat;
    cat.name = "mittens";
    cat.age = 3;

    Animal* animal1 = &dog;
    animal1->makeSound();
    Animal* animal2 = &cat;
    animal2->makeSound();

}