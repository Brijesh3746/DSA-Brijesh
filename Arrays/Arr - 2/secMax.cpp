#include<iostream>
#include<vector>
using namespace std;

void secMax(vector<int>v,int n){

    int max = 0;
    int sMax = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= max)
        {   
            sMax = max;
            max = v[i];
        }
        
        
    }
    cout << "Max is :" << max << endl;
    cout << "Second Max is :" << sMax << endl;

    
}


int main(){

    vector<int>v = {0,-1,3,-5,10};
    secMax(v,v.size());

    return 0;
}