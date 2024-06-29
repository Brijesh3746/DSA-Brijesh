#include<iostream>
using namespace std;

int findOddOccringElement(int arr[] ,int n)
{
    int s  = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e-s)/2;

        if(s == e){
            return s;
        }
        if (mid & 1){
            // mid & 1 => true => return odd number
            if (mid - 1 >= 0 && arr[mid] == arr[mid-1])
            {
                // left hu
                // right me jana hai
                s = mid + 1;
            }
            else{
                // right hu
                // left me jana hai
                e = mid - 1;
            }
        }
        else{
            // mid & 1 => false => return even number
            if (arr[mid] == arr[mid+1] && mid + 1 < n)
            {
                // me left me hu 
                // right me jana hai
                s = mid + 2;
                // why mid + 2 bcz 
                // already checked
            }
            else{
                // right hu 
                // ya phir ans pe hu
                // left pe jana hai
                e = mid;
                // if mid - 1 then answer may be lost
            }
            
        }
        
    }
    return -1;
    
}

int main()
{
    int arr[] = {10,2,2,5,5,8,8,9,9,6,6,3,3};
    int n = 13;

    int ansIndex = findOddOccringElement(arr,n);

    cout << "Odd occuring Element is :" << arr[ansIndex];
 return 0;
}