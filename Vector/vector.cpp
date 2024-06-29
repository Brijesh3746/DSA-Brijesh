#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){

    // find vector size
    int size = v.size();

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
}

void print2(vector<int>v){

    cout << " Second method to print vector" ;
   for(auto it:v){
    cout << it << " ";
   }
    
}


int main(){
    // vector
    vector<int> v; // define the vector //default way to initilize of vector
    // cout << v.size() << endl;
    v.push_back(10); // add element in vector
    v.push_back(20);
    v.push_back(30);

    for (int i = 2; i >= 1 ; i--)
    {
        v[i] = v[i-1];
    }

    for (int  i = 0; i < 2; i++)
    {
            cout << v[i];

    }
        

    // vector<int>arr(5,-1); // 5 size and all value are -1 but it also dynamic

    // vector<int>arr2 = {1,2,3,4,5}; // with specific value of vector

    // vector<int>arr3(arr2); // Copy the value of arr2
    
    // print2(arr2);

    // insert the element in vector
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);

    // // print(v);

    // cout << v.front() << endl; // first element of vector 
    // cout << v.back() << endl; // last element of vector

    

    // delete the element in vector -> from last position 
    // v.pop_back();
    // print(v);

    // I want clear vector
 
    return 0;
}