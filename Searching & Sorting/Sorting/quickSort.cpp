#include<iostream>
using namespace std;

void quickSort(int arr[],int s,int e){
    // base case
    if(s >= e) return;

    int pivotIndex = e;
    int i = s ;//- 1;
    int j = s;

    while(j < pivotIndex){
        if(arr[j] < arr[pivotIndex]){
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }

    // i++; -> lakshya bhai case
    swap(arr[i], arr[j]);

    // recursion call 
    // chote element 
    quickSort(arr, s, i - 1);

    // bade element
    quickSort(arr,i+1,e);
}


int main()
{
    int arr[] = {5,7,1,7,7,4,4,4,5,6,5,4};
    int n = 12;

    int s = 0;
    int e = n-1;

    cout << "Before : "; 
    for(int i:arr){
        cout<<i<<" ";
    }
    cout << endl;

    quickSort(arr,s,e);

    cout << "After  : "; 
    for(int i:arr){
        cout<<i<<" ";
    }
    cout << endl;
 return 0;
}