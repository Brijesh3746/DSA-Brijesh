#include<iostream>
using namespace std;
#define PI 3.14

class Circle{
    public:
        int x;

        Circle(int x){
            this->x = x;
        }

    void areaOfCircle(){
        cout << "Area of circle is: " << PI * x * x <<endl;
    }

};

int main()
{
    Circle c1(5);
    c1.areaOfCircle();
 return 0;
}