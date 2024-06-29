#include<iostream>
using namespace std;

bool twoSum(int arr[] , int n ,int target){
    int x,y;

for(int i = 0; i < n-1; i++){
        if (target == (arr[i] + arr[i+1]))
        {
           return x=i,y=i+1;
        }
        
    }
    return false;
}

int main()
{
    int arr[] = {1, -2, 1, 0, 5};
    int n = 5;
    int target = 0;

    bool ans = twoSum(arr,n,target);

    if (ans == true)
    {
        cout << "Target is present";
    }
    


    
    

    return 0;
}