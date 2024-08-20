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


// MultiLevel Inheritance

class Car {
public:
    string name;
};

class Honda :public Car {
    public:
        int weight;
};

class Amaze : public Honda{
    public:
        int age;
};


int main()
{
    Amaze a1;
    cout << a1.age << " " << a1.name << " " << a1.weight << endl;

    return 0;
}