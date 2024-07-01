#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
        }
}

void bubbleSort(vector<int>& nums){
    int n=nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i -1; j++)
        {
            if (nums[j] > nums[j+1])
            {
                swap(nums[j],nums[j+1]);
            }
            
        }
        
    }
    
}

int main()
{
    vector<int>v = {5,14,63,-42,100};
    bubbleSort(v);
    print(v);
 return 0;
}