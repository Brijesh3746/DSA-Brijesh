#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

bool isPrime(int& n) {
    if (n <= 1) return false;

    //     //____________________ wihtout optimize______________________
    //     for (int i = 2; i < n-1; i++)
    //     {
    //         if(n % i == 0)
    //             return false;
    //     }
    //     return true;


    // __________________________With Optimize____________________________________
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;

    }
    return true;
}

void checkPrime(int& n) {
    if (isPrime(n)) {
        cout << n << " is Prime";
    }
    else {
        cout << n << " is Not Prime";
    }
}

int main()
{
    int n = 2;
    checkPrime(n);
    return 0;
}