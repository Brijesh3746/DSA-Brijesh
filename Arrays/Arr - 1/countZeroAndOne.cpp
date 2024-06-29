#include<iostream>
using namespace std;
void countZeroAndOne(int arr[],int size){
    int zero = 0;
    int one = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==0)
        {
            zero++;
        }
        else{
            one++;
        }
        
    }
    cout<< "No of Zero is : " << zero << endl;
    cout<< "No of One is : " << one << endl;

    
}

int main(){
    int arr[10] = {0,1,1,0,1,1,0,1,1,0};
    int size = 10;

    countZeroAndOne(arr,size);


    return 0;
}