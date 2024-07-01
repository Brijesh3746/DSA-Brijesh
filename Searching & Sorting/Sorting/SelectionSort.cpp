#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
        }
}

void selectionSort(vector<int>& nums){
    int n=nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        // min index mtlb min element index

        for (int j = i+1; j < n ; j++)
        {
            if (nums[j] < nums[minIndex])
            {
                minIndex  = j;
            }
            
        }

        // swaping with ith element
        swap(nums[i],nums[minIndex]);
        
    }
    
}


int main()
{
    vector<int>v = {17,81,24,100,7,2};
    selectionSort(v);
    print(v);
 return 0;
}