#include <iostream>
using namespace std;

void negShiftOneSide(int arr[],int n){
    int negIndex = 0;
    for (int index = 0; index < n; index++)
    {
       if(arr[index]<0){
        swap(arr[index],arr[negIndex]);
        negIndex++;
       }
    }
    
}

int main(){

    int arr[] = {-23,-7,0,-12,-11,40,60};
    int n = 7;

    negShiftOneSide(arr,n);

    for (int  i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}