#include "iostream"
using namespace std;

// 10
// 8 9
// 7 6 5
// 1 2 3 4

int main(){
    // Value of Pattern
    int n,value;
    cout << "Enter the value of Pattern : ";
    cin >> n;

    value = (n % 2 == 0 ? ((n*(n/2)) + (n/2)) : ((n*(n/2)) + (n)));


   for (int i = 0; i < n; i++)
   {    
    int k;
        for (int j = 0; j < i+1; j++)
        {
            if (i == 0)
            {
                cout << value << " ";
            }
            else if (i % 2 == 1)
            {
                k = value - (i + 1) + j;
                cout << k << " ";
            }
            else{
                
                value = k - (i + j);
                cout << value << " ";
            }
            
        }
            cout << endl;
        
   }
   
    return 0;
} 