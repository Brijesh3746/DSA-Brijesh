#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

class Bird{
    // create a interface
    public:
        virtual void fly() = 0;
        virtual void eat() = 0;
};

class Sparrow:public Bird{
    private:
        void eat(){
            cout<<"Sparrow is eating"<<endl;
        }
        void fly(){
            cout << "Sparrow is Flying \n"; 
        }
};

class Eagle :public Bird {
private:
    void eat() {
        cout << "Eagle is eating" << endl;
    }
    void fly() {
        cout << "Eagle is Flying \n";
    }
};


#endif // BIRD_H
