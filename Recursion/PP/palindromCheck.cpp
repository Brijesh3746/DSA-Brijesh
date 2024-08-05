#include<iostream>
using namespace std;

bool checkPalindrom(string &str,int s, int e){
    if(s >= e)
        return true;

    if(str[s] != str[e])
        return false;
    
    checkPalindrom(str,s+1,e-1);
}

int main(){

    string str = "RSB";
    bool ans = checkPalindrom(str,0,str.length()-1);

    if (ans&1)
    {
        cout << "IT's Palindromic String "<< endl;
    }
    else{
        cout << "it is not palindrom" << endl;
    }
    
 return 0;
}