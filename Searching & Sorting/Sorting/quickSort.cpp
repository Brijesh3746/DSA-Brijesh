#include<iostream>
using namespace std;

void quickSort(int arr[],int s,int e){
    // base case
    if(s >= e) return;

    int pivotIndex = e;
    int i = s - 1;
    int j = s;

    while(j < pivotIndex){
        if(arr[j] < arr[pivotIndex]){
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }

    i++;
    swap(arr[i], arr[j]);

    // recursion call 
    // chote element 
    quickSort(arr, s, i - 1);

    // bade element
    quickSort(arr,i+1,e);
}


int main()
{
    int arr[] = {7,5,5,5,5,2,2,2,2,10,4};
    int n = 11;

    int s = 0;
    int e = n-1;
    quickSort(arr,s,e);

    for(int i:arr){
        cout<<i<<" ";
    }
 return 0;
}