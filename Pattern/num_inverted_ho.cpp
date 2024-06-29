#include "iostream"
using namespace std;

int main(){
    int n = 5;
    // cout << "Enter the number"<<endl;
    // cin >> n;

    for(int i = 0; i < n; i++){
        for (int j = i+1; j <=n; j++)
        {   
            if(j == i+1 || i == 0 || j == n)
                cout << j;
            else
                cout << " ";    
        }
        
        cout << endl;
        }
        
    

    return 0;
} 