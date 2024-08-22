#include<iostream>
using namespace std;

class Vector {
    int x, y;
public:
    Vector(int x, int y) :x(x), y(y) {}

    void display() {
        cout << "X: " << x << "\nY: " << y << endl;
    }

    void operator+(const Vector& obj) {
        this->x = this->x + obj.x;
        this->y = this->y + obj.y;
        display();
    }
};

class Task {
    int age, weight;
    string name;

public:
    Task() : age(0), weight(0), name("") {}

    friend istream& operator>>(istream& is, Task& t){
        cout << "Enter Name: " ;
        is >> t.name;

        cout << "Enter Age: ";
        is >> t.age;

        cout << "Enter Weight: ";
        is >> t.weight;

        return is;

    }

    friend ostream& operator<<(ostream& os, const Task& t) {
        os << "Name: " << t.name << endl;
        os << "Age: " << t.age << endl;
        os << "Weight: " << t.weight << endl;
        return os;
    }
};

int main()
{
    // Vector v1(10, 20);
    // Vector v2(20, 40);

    // v1 + v2;
    // Task t(15, 50, "Rahul");
    Task t;
    cin >> t;
    cout << t;
    return 0;
}