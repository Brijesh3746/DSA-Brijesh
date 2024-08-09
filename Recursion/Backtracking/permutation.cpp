#include<iostream>
using namespace std;

void allPermutation(string &s,int i){
    // base case
    if(i >= s.length()){
        cout << s << " ";
        return;
    }

    for (int j = i; j < s.size(); j++)
    {
        swap(s[i],s[j]);
        allPermutation(s,i+1);
        // backtracking bcz we use by ref
        // that's why change in actual string
        // recursive call se waps ate samay add action perform krna hai
        swap(s[i],s[j]);
    }
    
}

int main()
{
    string str  = "abc";
    int i = 0;
    allPermutation(str,i);
 return 0;
}