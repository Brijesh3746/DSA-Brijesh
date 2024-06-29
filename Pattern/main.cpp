#include <iostream>
using namespace std;


//}

//hollow rectangle
//int main() {
//    for(int i = 0;i<5 ; i++){
//        for(int j = 0 ; j<5 ; j++){
//            if( i == 0 || i == 4){
//                cout << "* " ;
//            }
//            else{
//                if(j==0 || j==4){
//                    cout << "* ";
//                }
//                else{
//                    cout << "  ";
//                }
//            }
//        }
//        cout << endl;
//    }




//half pyramid
//int main() {
//    for(int i = 0; i<5; i++){
//        for(int j = 0; j<i+1; j++){
//            cout << "* ";
//        }
//        cout << endl;
//    }
//    return 0;
//}


//Reverse half pyramid
//int main() {
//    int n=5;
//    for(int i = 0; i<n; i++){
//        for(int j = 0; j<n-i; j++){
//            cout << "* ";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//numeric
//int main() {
//    int n=5;
//    for(int i = 0; i<n; i++){
//        for(int j = 0; j<i+1; j++){
//                cout << j+1 <<" ";
//        }
//        cout << endl;
//    }
//    return 0;
//}

// Reverse numeric
int main() {
   int n=5;
   for(int row = 0; row<n; row++){
       for(int col = 0; col<n-row; col++){
           cout << col+1 << " ";
       }
       cout << endl;
   }
   return 0;
}

// int main() {
//    int n =101;
////     "enter n";
//    if(cout << n){
//        cout << "Babbar";
//    }
//    return 0;
// }
