#include<iostream>
using namespace std;
class X{
        int x = 10;
        static int y;
    public:

        X(){
            cout << "X() called" << x << endl << y;
        }
};
int X::y=20;
int main()
{
    X obj;
 return 0;
}