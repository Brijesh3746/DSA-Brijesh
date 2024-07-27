#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void printArr(int arr[],int length,int i){
    if(i == length )
        return;
    
    cout << arr[i] << " ";
    printArr(arr,length,i+1);
}
bool searchInArr(int arr[], int size, int i,int target){
    if(i == size)
        return false;
        
    if (arr[i] == target)
    {
        return true;
    }

    searchInArr(arr,size,i+1,target);
    
}
void minInArr(int arr[],int size,int i,int &mini){
    // isme cache ye tha ki jab aap mini ko change karoge pan uski change nahi hogi 
    // kyoki ye pass by value hua that's why pass by ref used 
    
    // base case
    if(i == size)
        return;
    // 1st appracoh
    // if(arr[i] < min){
    //     min = arr[i];
    // } 

    // 2nd approach
    mini = min(mini,arr[i]);

    minInArr(arr,size,i+1,mini);
}
void evenPrintVector(int arr[],int size,int i,vector<int>& ans){

    // base case
    if(i == size)
        return;

    if((arr[i] & 1) == 0){
        ans.push_back(arr[i]);
    }

    evenPrintVector(arr,size,i+1,ans);
}
void doubleArrayElement(int arr[],int size,int i){
    // base case
    if(i == size)
        return;

    arr[i] = arr[i]*2;

    // recursive case
    doubleArrayElement(arr,size,i+1);
}
void maxInArr(int arr[],int size,int i,int &maxi){
    // base case
    if(i >= size)
        return;

    // processing
    maxi = max(maxi,arr[i]);

    // recursive call
    maxInArr(arr,size,i+1,maxi);

}
int findElement(int arr[],int size,int i,int target){
    // base case
    if(i == size)
        return -1;

    // processing
    if(arr[i] == target){
        return i;
    }

    // recursive call 
    int index = findElement(arr,size,i+1,target);
    return index;
}
void printAllOccurance(int arr[],int size,int i,int target){
    // base case
    if(i == size)
        return;

    // processing
    if(arr[i] == target)
        cout << i << " ";

    // recursive call
    printAllOccurance(arr,size,i+1,target);
}
vector<int> printDigitOfNum(int n){
    vector<int> ans;
    if(n == 0)
        return ans;
    
    int lastNum = n % 10;
    n /= 10;

    

   vector<int> aageKaAns = printDigitOfNum(n);
    ans = aageKaAns;
    ans.push_back(lastNum);

    return ans;
    // cout << lastNum << endl;
    
}
void vectorToDigit(vector<int> v,int &n,int m){
    
    if(v.size() == 0)
        return;
    
    n += v.back() * m;
    m = m * 10;

    v.pop_back();

    vectorToDigit(v,n,m);


}
void targetIndex(string s,int i,char target,vector<int> &v){
    if(i >= s.length())
        return;

    if(s[i] == target)
        v.push_back(i);

    targetIndex(s,i+1,target,v);
}

int main()
{
    int arr[] = {10,20,30,40,50};
    // printArr(arr,5,0);
    // int target = -50;
    // int size = 5;
    // int index = 0;
    // cout << searchInArr(arr,size,index,target);

    // ---Find min in arrary using rec-----

//     int arr2[] = {50,30,80,157,9};
//     int size = 5;
//     int i = 0;
//     int min = INT_MAX;
//    minInArr(arr2,size,i,min);
//     cout << min;

// -------------------Even print in vector -------------------------------------

    // int arr3[] = {1,2,3,4,5,6,7};
    // int size = 7;
    // int i = 0;
    // vector<int>ans;
    // evenPrintVector(arr3,size,i,ans);

    // for(int print:ans){
    //     cout << print << " ";
    // }

    // _______________Double the array element _____________

    // int arr4[] = {10,20,30,40,50};
    // int size = 5;
    // int i = 0;
    // doubleArrayElement(arr4,size,i);

    // for(int ans:arr4){
    //     cout << ans << " ";
    // }

    // ______________________Max in array______________________________________
    
    // int arr5[] = {30,10,50,80,90};
    // int size = 5;
    // int i = 0;
    // int max = INT_MIN;
    // maxInArr(arr5,size,i,max);
    // cout << max;

    // ________________________Find Element Index____________________________

    // int arr6[] = {10,20,30,40,50};
    // int size = 5;
    // int target = 60;
    // int index = 0;
    // cout << findElement(arr6,size,index,target);

    // ___________________________Print the all occurance of target _______________

    // int arr7[] = {10,20,10,10,50,60,10};
    // int size = 7;
    // int target = 10;
    // int i = 0;
    // printAllOccurance(arr7,size,i,target);

    // ________________________Print the digits of number____________________

    // int n = 1234;
    // vector<int> ans = printDigitOfNum(n);

    // for(int print:ans){
    //     cout << print << " ";
    // }

    // ___________________Vector to crete a digit
    // vector<int> v = {4,3,2,1};
    // int n = 0;
    // int m = 1;
    // vectorToDigit(v,n,m);
    // cout << "Number is :" << n << endl;

    // _________In String __Target found ___index add in vector_____

    string s = "babbar";
    char target = 'a';
    int index = 0;
    vector<int> v;

    targetIndex(s,index,target,v);

    for(int i:v){
        cout << i << " ";
    }



 return 0;
}