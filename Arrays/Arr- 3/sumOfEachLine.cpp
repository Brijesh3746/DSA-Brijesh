#include <iostream>
using namespace std;

void sumOfEach(int arr[][4],int row,int col){

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "sum of : " << sum ;
        cout << endl;
        
    }
    

}

int main()
{

    int arr[][4] = {
                    {1,2,3,40},
                    {20,3,4,1},
                    {5,6,7,80},
                };
    int row = 3;
    int col = 4;

    sumOfEach(arr,row,col);
    
    return 0;
}