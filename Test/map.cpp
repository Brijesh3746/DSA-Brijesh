#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
//     unordered_map<char, int> up =  {
//         {'I', 1},
//         {'V', 5},
//         {'X', 10},
//         {'L', 50},
//         {'C', 100},
//         {'D', 500},
//         {'M', 1000}
//     };

//    string str = "XII";
//    int ans = 0;
//    for(int i=0;i<str.size();i++){
//     ans += up[str[i]];
//    }
//    cout << ans;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i & 1)
            {
                cout << j + 1 << " ";

            }
            else{
                cout << "*" << " ";

            }
            
        }
        
        cout << endl;
    }
    
 return 0;
}