#include<iostream>
using namespace std;

int getNearSort(int arr[],int n,int target)
{
    int s = 0;                                                      
    int e = n-1;

    while (s <= e)
    {
        int mid = s + (e- s)/2;

        if (mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (arr[mid] == target)
        {
            return mid;
        }
        else if (mid + 1 <n &&arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if(target > arr[mid]){
            // right me jane ka 
            // s = mid + 1; nahi mid + 2
            // bcz in mid + 1 ek element 2 bar check 
            // ho raha tha is liye mid + 2 krna pada
            s = mid + 2;
        }
        else
        {
            // left me jane ka
            // e = mid - 1; nahi mid -2 
            // 2 bar check ho raha tha ek element 
            e = mid - 2;
        }       
        
        
    }
    return -1;
    
}


int main()
{   
    int arr[] = {20,10,30,50,40,70,60};
    int n= 7;
    
    int ans = getNearSort(arr,n,60);

    if (ans == -1)
    {
        cout << "Target Not Found"<<endl;
    }
    else
        cout << "Target Found At :" << ans << endl;
    
 return 0;
}