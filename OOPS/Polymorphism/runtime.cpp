#include<iostream>
using namespace std;


// what is function overriding 
// means function have same name 
// in both parent and child class
// so how to access them 
// virtual keyword is used to call function of which obj is created -> if pointer and obj are different
// if pointer and obj are same then no need of virtual keyword
// in here left side is reference(*) and right side is object created of this 
class Animal {
public:
    void speaking() {
        cout << "Animal is speaking1" << endl;
    }
    //    virtual void speaking2(){
    //         cout<<"Animal is speaking2"<<endl;
    //     }
};

class Dog :public Animal {
public:
    void speaking() {
        cout << "Dog is speaking1" << endl;
    }
    // void speaking2()  {
    //     cout << "Dog is speaking 2" << endl;
    // }
};

class Labra :public Dog {
public:
    void speaking() {
        cout << "Labra is the Specise of Dog" << endl;
    }
};

int main()
{
    Animal* a = new Dog;
    a->speaking();
    return 0;
}

// if u use virtual that means which creates object then call it's method means here create dog object so call dog method 

// but when without virtual that means jiska refrence hoga us class ka method call hog