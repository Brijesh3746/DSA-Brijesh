#include "iostream"
using namespace std;

void numDivideDigit(int n){
    int  count = 0;
    while (n ) {
        count = n%10;
        cout << "Digit is : " << count << endl;
        n /= 10;
    }
}

int main(){
    
    int n;
    cout <<"Enter number:" << endl;
    cin >> n;
    numDivideDigit(n);
    return 0;
    return 0;
} 