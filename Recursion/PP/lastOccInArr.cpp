#include<iostream>
using namespace std;

int lastOccUsingRight(string str,char x ,int i,int &ans){
    // base
    if(i<0)
        return ans;

    // check
    if (str[i] == x)
    {
        ans = i;
        return ans;
    }
    else
        return lastOccUsingRight(str,x,i-1,ans);
    
}

int main()
{
    string str;
    cin >> str;

    char ch;
    cin >> ch;

    int ans = -1;
    cout << "ans is :" <<lastOccUsingRight(str,ch,str.size() - 1,ans);

 return 0;
}