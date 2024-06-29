#include<iostream>
using namespace std;


// i/p -> 10,20,30,40,50,60

// o/p -> 10,60,20,50,30,40

void extramPrint(int arr[] , int size){

//    for (int i = 0; i <=size / 2; i++)
//    {
//     if (i == (size - i - 1))
//     {
//         cout << arr[i] <<" " ;
//     }
//     else{
//     cout << arr[i] << " " << arr[size - i - 1] << " ";

//     }
   
//    }
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        if (left == right )
        {
            cout << arr[left] << " ";
        }
        else{
            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }
        left++;
        right--;
    }
    
                     
} 

int main(){

    int arr[] = {10,20,30,40,50,60,70};
    int size  = 7;

    extramPrint(arr,size);

    return 0;
}