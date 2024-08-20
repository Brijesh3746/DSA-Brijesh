#include<iostream>
using namespace std;

class Animal{
    public:
        int age;
        int w;

        void eat(){
            cout << "  eating." << endl;
        }
};

class  Dog : public Animal{

};


int main()
{
    cout << sizeof(Dog);
 return 0;
}