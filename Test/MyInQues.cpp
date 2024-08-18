#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    string str[] = {"rajesh","Patel","Papa"};
    int n =3;
    cout << n;
    int ma = INT_MIN;
    int sm,tm,index;
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(str[i].size());
    }

    for (int i = 0; i < ans.size(); i++)
    {
        if(ma < ans[i]){
            tm = sm;
            sm = ma;
            ma = ans[i];
        }
        else if(ma <= ans[i] && ans[i] >= sm){
            tm = sm;
            sm = ans[i];
            index = i;
        }
        else if(ans[i] <= sm && ans[i] >= tm){
            tm = ans[i];
            index = i;
        }
        
    }
    
    cout << str[index] << endl;
    
    return 0;
}