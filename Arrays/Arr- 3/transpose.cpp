#include <iostream>
using namespace std;

void transpose(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }

    }
    for (int i = 0; i < row; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }
    
}

int main(){

    int arr[][3] = {
                    {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
                };
    int row = 3;
    int col = 3;

    transpose(arr,row,col);
    
    return 0;
}