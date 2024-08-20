#include<iostream>
#include<limits.h>
using namespace std;

void bubbleSort(int *arr,int n){
   for(int j=0;j<n-1;j++){
        for (int i = j;i < n - 1;i++) {
            if (i+1 < n && arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
   }
}

void selectionSort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

int main()
{
    int arr[] = {44,11,55,22,33};
    int n = 5;
    // selectionSort(arr,n)
    bubbleSort(arr, n);
    for(auto i:arr){
        cout << i << " ";
    }
 return 0;
}