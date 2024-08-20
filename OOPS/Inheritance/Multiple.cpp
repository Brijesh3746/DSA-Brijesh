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


// Multiple Inheritance
class A{
    public:
        int physics;
        int chemistry;
        A(){
            physics = 90;
            chemistry = 90;
        }
};

class B{
    public:
        int physics;
        B(){
            physics = 100;
        }
};

class C:public A, public B{
    public:
        int maths;
        C(){
            maths  = 50;
        }
};  


// in case of Class A and Class B have a same member then compiler has 
// confuse this called dimond problem 

// how to solve dimond problem -> using scope resoultion operator


// objectName.className::memberName


int main()
{
    C object1;
    cout << object1.A::physics << endl;
    cout << object1.B::physics << endl;
    cout << object1.maths << endl;


    return 0;
}