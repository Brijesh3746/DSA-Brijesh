#include<iostream>
using namespace std;


class abc{
    public:
     int rno;

     abc():rno(0){}

    void increment(){
        cout << "Roll No: " << ++rno << endl;
    }

    
};

// int abc::rno = 0;

int main()
{
    abc a,b,c;
    a.increment();
    b.increment();
    c.increment();

 return 0;
}