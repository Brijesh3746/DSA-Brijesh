#include<iostream>
using namespace std;

class abc {
    int x;
    int* y;
    int z;

public:
    // abc(int _x, int _y, int _z = 0) {
    //     x = _x;
    //     y = new int(_y);
    //     // *y = _y;
    //     z = _z;
    // }

    // Initialize list -> it's allow the const var to initialize one time 
    // ex -> const int z; ctor-> error but init list -> no error
    abc(int _x, int _y, int _z = 0) :x(_x), y(new int(_y)), z(_z) {
        cout << "Init List " << endl;

        *y = *y * 20; 
        // z=10; -> error ayega kyu ki ek bar aap uper init kar chuke ho
    }


    int getX() const // const ma mtlb is funtion me ap member ki value change nahi kar sakte 
    {
        return x;
    }

    void setX(int _x) {
        x = _x;
    }

    void setY(int _y) {
        *y = _y;
    }

    int getY() const {
        return *y;
    }

    void setZ(int _z) {
        z = _z;
    }

    int getZ() const {
        return z;
    }


};

void printABC(const abc& a) {
    // a.setX = 5; -> error aayenga bcz setX const method nahi hai
    cout << a.getX() << " " << a.getY();// << " " << a.getZ() << endl;
}

int main()
{
    abc a(1, 2, 3);
    printABC(a);
    // cout << a.getX() << endl;

    return 0;
}