#include "iostream"
using namespace std;

int main(){
    int count=0;
    int num;
    cin >> num;
    int set;
    
    // usign bitwise operator
    while(num >0){
        if(num & 1){
            count++;
        }
        num=num>>1;

    }
    cout <<"the set bit is :" << count << endl;


    return 0;
} 