// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual void method() {  // Not virtual
//         cout << "Base method" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void method()  {  // This will cause a compile-time error
//         cout << "Derived method" << endl;
//     }
// };

// int main() {
//     Base* d = new Derived();
//     d->method();  // Calls Derived::method

//     return 0;
// }

#include<iostream>
using namespace std;

class Student{
    int marks;

    public:     
        Student(int x){
            marks = x;
        }
        Student(){
            cout << " hello i";
        }
};

int main()
{
    // Student s1(100);
    // Student s2();
    // Student s3 = 100;
    Student s;
 return 0;
}