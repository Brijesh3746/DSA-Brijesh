#include<iostream>
using namespace std;

void merge(int arr[],int s,int e,int mid){
    

    // find size of leftArr and rightArr
    int leftLen = mid - s + 1;

    // e - (mid+ 1) +1 => e - mid
    int rightLen = e - mid;

    // create an empty arr in heap memory
    int* leftArr = new int[leftLen];
    int* rightArr = new int[rightLen];

    // values copy in empty arr
    int k = s;
    for(int i = 0; i < leftLen; i++) {
        leftArr[i] = arr[k];
        k++;
    }
    // k = mid + 1;
    for(int i = 0; i < rightLen; i++) {
        rightArr[i] = arr[k];
        k++;
    }

    // actual merge
    int leftArrIndex = 0;
    int rightArrIndex = 0;

    // Mistake change high
    int mainArrIndex = s;

    while(leftArrIndex < leftLen && rightArrIndex < rightLen){
        if(leftArr[leftArrIndex] < rightArr[rightArrIndex]){
            arr[mainArrIndex] = leftArr[leftArrIndex];
            mainArrIndex++;
            leftArrIndex++;
        }
        else{
            arr[mainArrIndex] = rightArr[rightArrIndex];
            mainArrIndex++;
            rightArrIndex++;
        }
    } 

    // 2 more case 

    // 1st jab left wali array puri hogyi hogi but right vali bachi hogi
    while(rightArrIndex < rightLen){
        arr[mainArrIndex] = rightArr[rightArrIndex];
        mainArrIndex++;
        rightArrIndex++;
    }

    // 2nd jab right wali array puri hogyi hogi but left vali bachi hogi
    while(leftArrIndex < leftLen){
        arr[mainArrIndex] = leftArr[leftArrIndex];
        mainArrIndex++;
        leftArrIndex++;
    }

    // 1more step -> deallocation of memory
    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(int arr[],int s,int e){
    // base case
    if(s >= e)
        return;


    // break
    // mid se break karenge
    int mid = (s + e)/2;


    // call
    // left arr -> s - 0,e - mid
    mergeSort(arr,s,mid);
    // right arr -> s - mid+1 , e = e
    mergeSort(arr,mid+1,e);

    // merge
    merge(arr,s,e,mid);
}

int main()
{

    int arr[] = {1,30,45,10,2};
    int n = 5;
    int s = 0;
    int e = n-1;

    cout << "After merge sort" << endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    cout << endl;

    mergeSort(arr,s,e);

    cout << "After merge sort" << endl;
    for(int i:arr){
        cout<<i<<" ";
    }
 return 0;
}