#include <iostream>
#include <vector>
using namespace std;

int main(){

    // creation of 2d array usign 2d vector
    vector< vector<int> > arr(3, vector<int>(4, 0));

    // arr.size -> no of rows in 2d vector
    // arr[i].size -> no of columns in 2d vector

    // for (int  i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // in vector every row have different columns 
    vector< vector<int> > brr;

    vector<int>brr1(10,9);
    vector<int>brr2(8,0);
    vector<int>brr3(11,-7);
    vector<int>brr4(1,92);
    vector<int>brr5(18,4);

   
        brr.push_back(brr1);
        brr.push_back(brr2);
        brr.push_back(brr3);
        brr.push_back(brr4);
        brr.push_back(brr5);

    
     for (int  i = 0; i < brr.size(); i++)
    {
        for (int j = 0; j < brr[i].size(); j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}