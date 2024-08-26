#include<iostream>
#define PI 3.14
#define MAXX(x,y) (x > y ? x :y)
using namespace std;

void areaOfCircle(int r){
    cout << PI * r * r;
}

void maximum(){
    int a = 5;
    int b = 10;
    cout << MAXX(a,b) << endl;
}

int main()
{
    maximum();
    areaOfCircle(5);
 return 0;
}