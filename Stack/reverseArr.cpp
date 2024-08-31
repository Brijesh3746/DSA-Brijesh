#include<iostream>
#include<stack>
using namespace std;

void reverseArr(int *arr,int n){
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(arr[i]);
    }

    // cout<<s.top();
    int j=0;
    while(!s.empty()){
        arr[j] = s.top();
        s.pop();
        j++;
    }
    
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = 5;

    cout << "Before: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    reverseArr(arr,n);

    cout << "After : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

 return 0;
}