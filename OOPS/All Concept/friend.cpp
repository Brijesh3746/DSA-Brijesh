#include<iostream>
using namespace std;

// friend keyword
// whate is the use of friend keyword
// jab kisi ek class ke private data member ko 
// dusri class ke and use krna ho tab

class A{
    int x;
    public:
        A(int x):x(x){}
    friend class B;
    friend void print(const A &);
};

class B{
    public:
        void print(const A &a){
            // A a(10);
            cout<<a.x<<endl;
        }
};


void print(const A & a){
    cout<<a.x<<endl;
}

int main()
{
    A a(5);
    A a2(50);
    B b;
    b.print(a);
    print(a2);
 return 0;
}