#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

void findMin(int arr[],int size){
    int minNum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // 1st method
        // if (arr[i] < minNum)
        // {   
        //     minNum = arr[i];
        // }

        // 2nd mehtod
        minNum = min(arr[i],minNum);
        
    }

    cout << minNum << endl;
    
}

int main(){

    int arr[] = {20,4,15,2,6,8,-11};
    int size = 7;
    findMin( arr, size);


    return 0;
}