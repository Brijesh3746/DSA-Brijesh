// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> v; // Define the vector
//     // Add elements to the vector
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);

//     // Loop to shift elements
//     for (int i = 2; i >= 1; i--) {
//         v[i] = v[i - 1];
//     }

//     // Loop to print the first two elements
//     for (int i = 0; i < 3; i++) {
//         cout << v[i] << " ";
//     }

//     return 0;
// }
#include<iostream>
using namespace std;

int main(){
    int n=3, sum=0;
    // cin >> n;
    int input[n];
    // for(int i=0;i<n;i++){
    //     cin >> input[0];
    // }
     for(int i=0; i<n; i++){
        //  sum = sum + input[i];
        // cout << "Input is "<<input[i] <<" " << endl;
        cin >> input[i];
     }
    // cout << sum << endl;
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    
    return 0;
}