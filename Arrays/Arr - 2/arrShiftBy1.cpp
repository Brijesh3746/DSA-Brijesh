#include<iostream>
using namespace std;

void shiftArr(int arr[] , int n){
    int temp = arr[n-1];
    for (int i = n-1; i >=1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    
}

int main(){

    int arr[] = {10,20,30,40,50};
    int size = 5;

    shiftArr(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    

 return 0;
}