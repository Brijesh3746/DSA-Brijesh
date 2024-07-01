#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }    
}

void insertionSort(vector<int>& v){
    int n = v.size();
    for (int i = 1; i < n; ++i)
    {
        int key = v[i];
        int j = i-1;
        
        while (v[j] > key && j>=0)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

int main()
{
    vector<int>v = {5,4,2,3,1};
    insertionSort(v);
    print(v);

 return 0;
}