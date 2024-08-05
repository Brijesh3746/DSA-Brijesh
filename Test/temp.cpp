#include<iostream>
using namespace std;


 double powerFind(double x,int n){
   double ans = 1;
    while(n > 0){
        if(n%2 == 1){
            ans = ans * x;
        }
        x = x*x;
        n = n/2;
    }
    return ((n>0) ? ans : (1 / ans));
}

int main()
{
    double x = 2.0;
    int n = -1;

    cout << powerFind(x,n);


 return 0;


}