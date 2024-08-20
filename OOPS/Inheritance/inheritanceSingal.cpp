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


// Singal Inheritance
 
class Car{
    public:
        int age;
        int weight;
        string name;

        void speeding(){
            cout << "This is My Speed " << endl;
        }

        void testing(){
            cout << "This is testing" << endl;
        }
};

class Porsche:public Car{

};


int main()
{
    Porsche b1;
    b1.speeding();


    return 0;
}