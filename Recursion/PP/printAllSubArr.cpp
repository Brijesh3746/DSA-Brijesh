#include<iostream>
#include<vector>
using namespace std;

void printSubArr(vector<int>nums,int s, int e){
    // bc
    if(s >= nums.size() - 1){
        return;
    }

    if(e >= nums.size()){   
        s = s + 1; 
        e = s;
    }        

    // ek
    for(int i=s;i<=e;i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    // rc
    printSubArr(nums,s,e+1);
}

int main()
{
    vector<int>nums = {1,2,3,4,5};
    printSubArr(nums,0,0);
 return 0;
}