#include<iostream>
using namespace std;

bool isSorted(int arr[],int size,int i){
    if(i >= size) return true;

    if(arr[i] > arr[i-1]){
        // aage check krlo
        // aage ka kam reecursion smbhal lega
        bool aageKaAns = isSorted(arr,size,i+1);
        return aageKaAns;   
    }
}
int binaSearch(int arr[], int size, int s, int e, int target){
    // base case
    if(s > e) return -1;

    // processing
    int mid = s + ((e-s)/2);
    if(arr[mid] == target){
        return mid;
    }

    // recursive case
    if(arr[mid] < target){
        return binaSearch(arr,size,mid+1,e,target);
    }
    else{
        return binaSearch(arr,size,s,mid-1,target);
    }
}
void subSecqunces(string str,string output,int i){
    if(i >= str.length()){
        // check the book bcz
        // jab bhi voo yaha ayegga 
        // uske pehle output build ho chuka hoga
        cout << " *_* "<<output  << endl;
        return;
    }

    char ch = str[i];

    // 1st approach
    // // including
    // output.push_back(ch);
    // subSecqunces(str,output,i+1);

    // // excluding 
    // // iska mtlab jo pehle push kiya tha
    // // usko pop karenge tabhi exclude hoga na
    // output.pop_back();
    // subSecqunces(str,output,i+1);

    // 2nd approach
    // exclude
    subSecqunces(str,output,i+1);

    // include
    output.push_back(ch);
    subSecqunces(str,output,i+1);



}

int main(){


    // ____________sorted array or not ______________

    // int arr[] = {10,20,30,40,50};
    // int size = 5;
    // int i = 1;
    
    // isSorted(arr,size,i);

    // __________Binary Search_________

    // int arr[] = {10,20,30,40,50,60,70};
    // int size = 7;
    // int s = 0;
    // int e = size - 1;

    // int target = 50;

    // int foundAt = binaSearch(arr,size,s,e,target);

    // if(foundAt != -1){
    //     cout << "Target found at: " << foundAt;
    // }
    // else{
    //     cout << "Target Not FOund" << endl;
    // }

    // _______________Sub Secqunces____________

    string str = "xy";
    string output = "";
    int index = 0;
    subSecqunces(str,output,index);
 return 0;
}