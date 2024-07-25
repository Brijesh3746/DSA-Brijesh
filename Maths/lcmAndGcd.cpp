#include<iostream>
using namespace std;

int gcmOfNum(int a , int b){
    if(a==0 ) return b;
    if(b==0 ) return a;

    while (a > 0 && b> 0)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
            b = b - a;
        
    }
    
    return a == 0 ? b : a;
}

int lcmOfNum(int a , int b){
    return a*b/gcmOfNum(a,b);
}

int slowEx(int a,int b){
   int ans  = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
   return ans;
}

int main()
{
    // int hcm = gcmOfNum(12,16);
    // int lcm = lcmOfNum(12,16);

    // cout << "LCM :" << lcm << endl;
    // cout << "HCM :" << hcm << endl;

    // int a;
    // cout << "HELLO : " <<((10%3)%3) << endl;

    cout << slowEx(5,4);    
 return 0;
}