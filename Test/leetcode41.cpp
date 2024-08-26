// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    vector<int> arr = { 1,2,0 };
    int n = 3;

    int i = 0;
    int j = i + 1;
    while (j < n) {
        if (arr[i] > arr[j]) {
            swap(arr[i], arr[j]);
            i = 0;
        }
        
            i++;
            j++;
        
    }
    for (auto i : arr)
        cout << i << " ";
    return 0;
}