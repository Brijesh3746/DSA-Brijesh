#include<iostream>
using namespace std;

// Types of inheritance
// 1. Single Inheritance
// -> One Parent Class nd One Child Class

// 2. Multilevel Inheritance
// -> One Parent Class and child class
// -> child class have subChild class 
// Fruit <- Mango <- Kesar

// 3. Multiple Inheritance
// -> More then One Parent Class And One Child Class

// 4. Hierarchical Inheritance
// -> One Parent Class and More then One child Class

// 5. Hybrid Inheritance
// -> Combination of All inheritance


// Hierarchical Inheritance

class Car {
public:
    string name;
    Car(){
        name = "Car";
    }
};

class Porsche :public Car {
public:
    int age;
};

class Defender : public Car {
public:
    int age;
};


int main()
{
    Porsche p1;
    Defender d1;

    cout << p1.age << " " << p1.name << endl;
    cout << d1.age << " " << d1.name << endl;

    return 0;
}