#include<iostream>
using namespace std;

void sortZeroOne(int arr[],int n){

    int countZero = 0;
    int countOne = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
        else{
            countOne++;
        }
    }

    // // set all zero
    // int i;
    // for (i = 0; i < countZero; i++)
    // {
    //         arr[i] = 0;        
    // }

    // // set all one
    // for (int j = i; j < n; j++){
    //     arr[j] = 1;
    // }
    int index = 0;

    while (countZero--){
        arr[index] = 0;
        index++;
    }
    
    while (countOne--) 
    {
        arr[index] = 1;
        index++;
    }
    
    

}

int main(){

    int arr[] = {1,1,0,0,0,1,0};
    int size = 7;
   
    sortZeroOne(arr,size);

    for(int  i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    

    return 0;
}