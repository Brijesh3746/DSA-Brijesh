// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    // string s = "hello";
    // // cout << s + '0' ;
    // int i=2;int lenght = 3;
    // cout << s.substr(i/2,lenght); //-> ell
    vector<int>ans;
    vector<vector<int> >arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int b=1;
    int i=0;
    int j=0;
    int n=arr.size();
    while (b)
    {
        while (j < n)
        {
            ans.push_back(arr[i][j]);
            j++;
            
        }
        if(j == n) j--;
        while(j == (n-1) && i < n){
            i++;
            ans.push_back(arr[i][j]);
        }
        if(i == n) i--;

        b /=2 ;
        
    }

    for(int i:ans){
        cout << i << " ";
    }
    
       return 0;
}