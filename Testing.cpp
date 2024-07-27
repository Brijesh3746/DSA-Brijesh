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

void arrayFind(int arr[]){
    arr[0] = 2;
    arr[1] = 5;
}

int main()
{
    vector<int> ans = {100,200};
    vec(ans);
    int arr[2];
    arrayFind(arr);
    for (int  i = 0; i < 2; i++)
    {
        cout << ans[i] <<" ";
    }
    
 return 0;
}