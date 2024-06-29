// #include "iostream"
// using namespace std;

// // int sumOfthree(int a ,int b, int c)
// // {
// //     return a+b+c;
// // }

// void sumOf1ToN(int n){
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//      sum += i; 
//     }
//     cout << "Sum is : " << sum <<endl;
// }

// void sumOfEven(int n){
//     int sum = 0;
//     for (int i = 2; i <= n; i=i+2)
//     {   
//             sum += i; 
//     }
//     cout << "Sum of Even is : " << sum <<endl;
// }

bool primeOrNot(int n){
    for (int i = 2; i < n/2; i++)
    {
        if (n%i == 0)
        {
            return false;
        }
        return true;
    }
}


// int main(){
//     // int a;
//     sumOf1ToN(5);
//     sumOfEven(5);
//     primeOrNot(29);
//     // cout << sumOfthree(4,3,a);
//     return 0;
// } 

#include "iostream"
using namespace std;

int main(){
    bool prime = primeOrNot(2);
    if(prime){
        cout << "prime";
    }
    else{
        cout << "not prime";
    }
    // cout << (165 & 1) <<endl; //bitwise AND operation to find  odd or even number. If the result is  0 then it's an even number otherwise
    return 0;
} 