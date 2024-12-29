#include <iostream>
#include <string>

using namespace std;

class Animal {
    public:
        string name;
        int age;

        void eat() {
            cout << name << " is eating." << endl;
        }
};


class Dog: public Animal{
    public:
        void bark() {
        cout << name << " is barking" << endl;
        }
};

int main () {
    Dog dog;
    dog.name = "budi";
    dog.age = 6;

    dog.eat();
    dog.bark();
}