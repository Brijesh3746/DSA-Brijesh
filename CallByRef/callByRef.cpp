#include<iostream>
using namespace std;

void incrementBy1(int &n){
    // call by ref 
    n = n + 1;
}

int main(){
    
    int n;
    cin >> n;

    incrementBy1(n);

    cout << "n:" << n << endl;

    return 0;
}