#include <iostream>
using namespace std;
int main()
{
    // declareation
    char ch[10];

    // input
     // cin >> ch; //-> without use of tab and spaces 
    cin.getline(ch,10); // -> in case of tab and space use  

    // output
    cout << ch << endl;

    int value = ch[7];
    cout << "Value of :" << value << endl; 
    return 0;
}