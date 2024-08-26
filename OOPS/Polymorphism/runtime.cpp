#include<iostream>
using namespace std;


// what is function overriding 
// means function have same name 
// in both parent and child class
// so how to access them 
// virtual keyword is used to call function of which obj is created -> if pointer and obj are different
// if pointer and obj are same then no need of virtual keyword
class Animal{
    public:
        void speaking1(){
            cout<<"Animal is speaking1"<<endl;
        }
       virtual void speaking2(){
            cout<<"Animal is speaking2"<<endl;
        }
};

class Dog:public Animal{
    public:
        void speaking1() {
            cout<<"Dog is speaking1"<<endl;
        }
        void speaking2()  {
            cout << "Dog is speaking 2" << endl;
        }
};

class Labra:public Dog{
    public:
        void speaking(){
            cout << "Labra is the Specise of Dog" << endl;
        }
};

int main()
{
    Animal* animal = new Dog();
    animal->speaking2();
 return 0;
}