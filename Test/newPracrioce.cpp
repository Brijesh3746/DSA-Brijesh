#include<iostream>
#include <typeinfo>
#include<string>

using namespace std;
int main()
{
    int s = 1;
    int s1 = 0;
    string ans="";
    cout << typeid(s).name() << endl;
    ans.push_back(s +'0');
    ans.push_back(s1 + '0');

    cout << ans;
    // cout << typeid(s).name << endl;
 return 0;
}