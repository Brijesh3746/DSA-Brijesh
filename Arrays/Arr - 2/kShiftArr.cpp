#include<iostream>
using namespace std;

void kShiftArr(int arr[],int n,int k){

    int temp[k] = {arr[n-k],arr[n-k+1]};
    int i;
    for ( i = n - 1; i >= k; i--)
    {
        arr[i] = arr[i-k];
    }
    for ( i = 0; i < k; i++){
        arr[i] = temp[i];
    }
    
}

int main(){

    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int k = 2;

    kShiftArr(arr,size,k);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    

    return 0;
}