// #include <iostream>
// #include <vector>
// #include <algorithm> // Include this header for the sort function
// #include <string>
// #include <limits.h>

// using namespace std;

// bool muycom(char& a, char& b) {
//     return a > b;
// }

// // int main()
// // {
// //     // vector<char> str = {'b', 'c', 'a', 'd'};
// //     string order = "cba";
// //     string s = "abcd"
// //     // for (int i = 97; i < 123; i++)
// //     // {
// //     //     str.push_back((char)i);
// //     // }
// //     sort(str.begin(), str.end(),muycom);

// //     for (int i = 0; i < str.size(); i++)
// //     {
// //         cout << str[i] << " ";
// //     }

// //     return 0;
// // }

// void vec(vector<int> ans) {
//     ans[0] = 5;
//     ans[1] = 10;
// }

// void numsayFind(int nums[]) {
//     nums[0] = 2;
//     nums[1] = 5;
// }
// double powerFind(double x, int n) {
//     double ans = 1;
//     while (n > 0) {
//         if (n & 1) {
//             ans = ans * x;
//         }
//         x = x * x;
//         n >> 1;
//     }
//     return ans;
// }
// int main()
// {
//     // vector<int> ans = {100,200};
//     // vec(ans);
//     // int nums[2];
//     // numsayFind(nums);
//     // for (int  i = 0; i < 2; i++)
//     // {
//     //     cout << ans[i] <<" ";
//     // }

//     // int a = 5;

//     // cout << char((a+1) + '0');

//     // double x = 5;
//     // int n = 3;
//     // double ans = 1;

//     // cout << "Ans : " << powerFind(x,n);

//     // string s = "answer";
//     // string a = " is a answer";
//     // cout << (s + a);

//     // string s = "love bbar";
//     // int mid=s.find(' ')-1;



//     // cout << mid;

//     vector<int>ans;
//     string name[] = { "ramu","sh","khv","a"};//,"jawnaiw","a" };
//     int n = 4;
//     int ma = INT_MIN;
//     int sm,tm;
//     int tmI;


//     for (int i = 0; i < n; i++)
//     {
//         ans.push_back(name[i].length());
//     }

//     for (int i = 0; i < ans.size(); i++)
//     {
//         if(ma <= ans[i]){
//             tm = sm;
//             sm = ma;
//             ma = ans[i];
//         }
//         if(ma >= ans[i] && sm <= ans[i]){
//             tm=sm;
//             sm=ans[i];
//         }
//         if(ma >= ans[i] && sm >= ans[i] && tm <= ans[i] ){
//             tm = ans[i];
//             tmI = i;
//         }
//     }

//     for (int i : ans)
//         cout << i << " ";

//     cout << endl;
//     cout << tmI << endl;


//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>
// #include <climits>

// using namespace std;

// int main() {
//     vector<string> name = { "coder", "byter", "587fd"};//, "hgdrg" };
//     int n = name.size();

//     // Vector to store lengths of the strings
//     vector<int> lengths;
//     for (const auto& str : name) {
//         lengths.push_back(str.length());
//     }

//     // Variables to store maximum, second maximum, and third maximum lengths
//     int ma = INT_MIN, sm = INT_MIN, tm = INT_MIN;

//     // Find the first, second, and third maximum lengths
//     for (int length : lengths) {
//         if (length > ma) {
//             tm = sm;
//             sm = ma;
//             ma = length;
//         }
//         else if (length > sm && length < ma) {
//             tm = sm;
//             sm = length;
//         }
//         else if (length > tm && length < sm) {
//             tm = length;
//         }
//     }

//     // Find the last occurrence of the third maximum length
//     int last_index = -1;
//     for (int i = 0; i < n; ++i) {
//         if (name[i].length() == tm) {
//             last_index = i;
//         }
//     }

//     // Output the result
//     if (last_index != -1) {
//         cout << "Third maximum length string: " << name[last_index] << endl;
//     }
//     else {
//         cout << "Less than three unique lengths." << endl;
//     }

//     return 0;
// }
