#include<iostream>
using namespace std;

int x = 5;

int main()
{

    int x = 20;
    {
        {
            int x = 30;
            cout << x << endl;
        }
        cout << x << endl;
        cout << ::x << endl; 
    }
 return 0;
}