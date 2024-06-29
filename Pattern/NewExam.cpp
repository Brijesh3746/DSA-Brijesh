#include<iostream>
using namespace std;

// 16 15 14 13 
// 9 10 11 12
// 8 7 6 5
// 1 2 3 4

int main(){

    int n = 4;
    int v = 16;
    for (int i = 0; i <n; i++)
    {
        int k,l;
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
            {
                k = v - j;
                cout << k << " ";
                // v = k;
            }
            else if (i % 2 == 1)
            {
                l = k - n + j;
                cout << l << " ";
                // v = k;


            }
            else{
                // v = k;
                k = l - n - j;
                cout << k << " ";

            }
            
            
        }
        cout << endl;
        
    }
    


    return 0;
}