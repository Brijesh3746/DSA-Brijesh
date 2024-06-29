#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int target){
    
    int start = 0;
    int end  = n-1;
    // int mid = (start + end)/2;
    
    // best practice
    int mid  = start + (end-start)/2;

    while (start <= end)
    {   
        // target found
        if (arr[mid] == target)
        {
            return mid;
        }
        // right me jao
        else if (arr[mid] < target)
        {
            start  = mid + 1;
        }
        // left me jao
        else if (arr[mid] > target) 
        {
            end = mid -1;            
        }
        
        mid = (start + end )/2;
    }

    // agar idher aye ho to 
    // iska mtlb kuch nahi mila
    return -1;    
}

int findFirstOccurrence(int arr[],int n ,int target){
    int start = 0;
    int end  = n-1;

    int mid  = start + (end-start)/2;
    int ans = -1;

    while (start <= end)
    {   
        // target found
        if (arr[mid] == target)
        {
            ans = mid;

            // left me jao -> why left
            // because first occurrence
            end = mid -1;   
        }
        // right me jao
        else if (arr[mid] < target)
        {
            start  = mid + 1;
        }
        // left me jao
        else if (arr[mid] > target) 
        {
            end = mid -1;            
        }
        
        mid = (start + end )/2;
    }

    // agar idher aye ho to 
    // iska mtlb kuch nahi mila
    return ans;    
}

int findLastOccurrence(int arr[],int n ,int target){
    int start = 0;
    int end  = n-1;

    int mid  = start + (end-start)/2;
    int ans = -1;

    while (start <= end)
    {   
        // target found
        if (arr[mid] == target)
        {
            ans = mid;

            // left me jao -> why right
            // because last occurrence
            start = mid + 1;   
        }
        // right me jao
        else if (arr[mid] < target)
        {
            start  = mid + 1;
        }
        // left me jao
        else if (arr[mid] > target) 
        {
            end = mid -1;            
        }
        
        mid = (start + end )/2;
    }

    // agar idher aye ho to 
    // iska mtlb kuch nahi mila
    return ans;    
}

int totalOccurrence(int arr[],int n,int target){
    int firstOcc = findFirstOccurrence(arr,n,target);
    int lastOcc = findLastOccurrence(arr,n,target);

    int totalOccurrence = lastOcc - firstOcc + 1;

    return totalOccurrence;
}

int main(){

    int arr[] = {10,20,30,40,50};
    int brr[] = {10};

    int n = 1;
    int target = 10;

    // cout << "Total Occurrenc : " << totalOccurrence(brr,n,target);

    // int ansIndex = binarySearch(arr,n,target);
    int ansIndex = findLastOccurrence(brr,n,target);


    if (ansIndex == -1)
    {
        cout << "Target not found" << endl;
               
    }
    else{
        cout << "Target found at index " << ansIndex << endl;
    }
    


    return 0;
}
