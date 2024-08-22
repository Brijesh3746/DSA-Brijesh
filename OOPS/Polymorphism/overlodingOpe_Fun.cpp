#include<iostream>
using namespace std;

// compile time Poly
// 1. Funtion Overloding
// 2. Operator Overloding

// Funciton Overloding :
    // -> Same 
class Param {
public:
    int value;

    void operator+ (Param& object2){
        int v1 = this->value;
        int v2 = object2.value;
        cout << (v1 - v2) << endl;
    }


    int sum(int a, int b) {
        cout << "I am in First: ";
        return a + b;
    }

    int sum(int a, int b, int c) {
        cout << "I am in Second: ";
        return a + b + c;
    }

    int sum(double a, double b) {
        cout << "I am in third : ";
        return a + b;
    }
};


int main()
{
// _____________________Function OverLoding______________________
    Param p;
    // cout << p.sum(10, 20) << endl;
    // cout << p.sum(10, 20, 30) << endl;
    // cout << p.sum(10, 200.5f) << endl;
    // cout << p.sum(1.2,2.3);
    

// ____________________Operator OverLoding________________________
    // Param object1, object2;
    // object1.value = 5;
    // object2.value = 7;

    // // object1 is current object 
    // // + is functionc calling
    // // object 2 is i/p params
    // // workLike: object1.add(object2)

    // object1 + object2;

    return 0;
}

// #include<iostream>
// using namespace std;


// class Task {
// public:
//     int age;
//     string name;
//     int weight;
//     int no;
//     string subject;

//     Task() {
//         age = 50;
//         name = "Rahul";
//         weight = 70;
//         no = 1;
//         subject = "Maths";
//     }

//     friend ostream& operator<<(ostream& os, const Task& task);
// };

// ostream& operator<<(ostream& os, const Task& task) {
//     os << "Age: " << task.age << endl;
//     os << "Name: " << task.name << endl;
//     os << "Weight: " << task.weight << endl;
//     os << "No: " << task.no << endl;
//     os << "Subject: " << task.subject << endl;
//     return os;
// }

// int main() {

//     Task t1;
//     cout << t1;

//     return 0;
// }
