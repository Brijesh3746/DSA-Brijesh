#include <iostream>
#include <vector>
#include <algorithm> // Include this header for the sort function

using namespace std;

bool muycom(char&a,char&b){
    return a > b;
}

// int main()
// {
//     // vector<char> str = {'b', 'c', 'a', 'd'};
//     string order = "cba";
//     string s = "abcd"
//     // for (int i = 97; i < 123; i++)
//     // {
//     //     str.push_back((char)i);
//     // }
//     sort(str.begin(), str.end(),muycom);
    
//     for (int i = 0; i < str.size(); i++)
//     {
//         cout << str[i] << " ";
//     }
    
//     return 0;
// }

void vec(vector<int> ans){
    ans[0] = 5;
    ans[1] = 10;
}

void numsayFind(int nums[]){
    nums[0] = 2;
    nums[1] = 5;
}
 double powerFind(double x,int n){
   double ans = 1;
    while(n > 0){
        if(n & 1){
            ans = ans * x;
        }
        x = x*x;
        n >> 1;
    }
    return ans;
}
int main()
{
    // vector<int> ans = {100,200};
    // vec(ans);
    // int nums[2];
    // numsayFind(nums);
    // for (int  i = 0; i < 2; i++)
    // {
    //     cout << ans[i] <<" ";
    // }

    // int a = 5;

    // cout << char((a+1) + '0');

    // double x = 5;
    // int n = 3;
    // double ans = 1;

    // cout << "Ans : " << powerFind(x,n);

    string s = "answer";
    string a = " is a answer";
    cout << (s + a);
    
    
 return 0;
}