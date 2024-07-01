#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int>& v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
}

void print2dv(vector<vector<int>> &arr){
    for (int i = 0; i < arr.size(); i++){
        vector<int>temp = arr[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " "<< b << endl;
    }
}

bool comp(int &a,int &b){ //here only 1d arr that's why only use its element a and b
    return a > b; // means decreasing order me sort hojayega

}

bool sortMyWayComp(vector<int>&a,vector<int>&b){
    // return a[0] < b[0]; basis on 0th elemetn increasing sorting 
    return a[1] < b[1];// basis on 1st elemetn increasing sorting 

}



int main()
{
    vector<int>v = {5,4,3,2,1};
    vector< vector<int> > arr ; //2d vector

    int a,b;

    for(int i = 0; i < 5; i++){
        cout << "a & b" <<  " ";
        cin >> a >> b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        arr.push_back(temp);

    }
    cout << " sorting : \n";
    sort(arr.begin(),arr.end(),sortMyWayComp);
    print2dv(arr);
    
    // sort(v.begin(),v.end(),comp);
    // print(v);

 return 0;
}