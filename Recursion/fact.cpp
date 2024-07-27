#include <iostream>
using namespace std;


int fact(int n){
    return (n*fact(n-1));
}

void reverseCount(int n){
    if(n == 0){
        return;
    }
    cout << n;
    reverseCount(n-1);
}

int power(int n,int pow){
    if(pow == 1){
        return n;
    }

    int ans = n * power(n,pow-1);
    
    return ans;

}

int fib(int n){
    if (n == 0 || n == 1)
    {
        return n;
    }

    int ans = fib(n-1)+fib(n-2);

    return ans;
    
}

int sumToN(int n){
    if (n == 1)
    {
        return n;
    }

    int ans = n + sumToN(n-1);

    return ans;
    
}

int main()
{
    // cout << fact(5) << endl;
    // reverseCount(5);
    // cout<<power(2,5) << endl;
    // cout << fib(5) << endl;
    cout << sumToN(5) << endl;

    return 0;
}