#include<iostream>
#include<limits.h>
using namespace std;

int maxInArr(int arr[],int size){
    int maxAns = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxAns)    
        {
            maxAns = arr[i];
        }
        
    }
    return maxAns;
    
}

int main(){

    int arr[] = {15,24,1,65,217,6};
    int size = 6;

    int maxAns = maxInArr(arr,size);

    cout << "Max n Array :" << maxAns << endl;

    return 0;
}