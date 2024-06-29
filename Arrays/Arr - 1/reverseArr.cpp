#include<iostream>
using namespace std;

void reverseArr(int arr[],int size){
    // for (int i = 0; i < size/2; i++)
    // {
    //     // 1st method
    // //     int temp = arr[i];
    // //     arr[i] = arr[size-i-1];
    // //     arr[size - i - 1] = temp;

    //     // 2nd method
    //     swap(arr[i],arr[size-1-i]);
    // }

    // 3rd
    // for (int left = 0, right = size- 1;left <= right ;left++,right--)
    // {   
    //     swap(arr[left],arr[right]);
    // }
    

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    

    // 4th
    int left = 0;
    int right = size-1;
    while (left<=right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    


    
}

int main(){

    int arr[]  = {1,2,3,4,5,6,7,8};
    int size  = 8;

    reverseArr(arr,size);

    return 0 ;
}