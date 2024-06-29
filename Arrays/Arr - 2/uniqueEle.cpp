#include<iostream>
using namespace std;

int getUniqueNumber(int arr[],int n){
    int ans = 0;
    // if 2 same number cancel out so use xor operation 
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){

    int arr[] = {2,6,4,6,4,8,2};
    int size = 7;

    int ans = getUniqueNumber(arr,size);

    cout << "Ans:" << ans << endl;

    return 0;
}