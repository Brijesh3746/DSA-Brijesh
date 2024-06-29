#include "iostream"
using namespace std;

int main(){
    int n;
    cout << "Enter the number"<<endl;
    cin >> n;

    for(int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++)
        {
            if(j == 0 || i == n-1 || j == i){
                cout << j+1;
            }
            else{
                cout << " ";
            }
            
        }
        cout << endl;
        
    }

    return 0;
} 