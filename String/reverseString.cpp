#include<iostream>
using namespace std;

string reverseString(string s){
    if(s.length() == 0 || s.length() == 1){
        return s;
    }

    return reverseString(s.substr(1)) + s[0];
}

void byVal(int n){
    n = 10;
}

void byRef(int &n){
    n = 10;
}


int main()
{
    cout << reverseString("Hello");

 return 0;
}
