#include <iostream>
using namespace std;

void solveVal(int* p){
    p = p + 1;
}
void solveRef(int* &p){
    p = p + 1;
}
int main()
{
    int a = 5;
    int* p = &a;

    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;

    // solveVal(p);
    solveRef(p);

    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    return 0;
}