#include<iostream>
using namespace std;

void reverseStr(string &str,int s,int e){
    while(s<e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
}

int main()
{
    string str;
    getline(cin,str);
    int s = 0;
    int e = str.size()-1;
    int mid = str.find(' ');

    cout << str << endl;

    reverseStr(str, s, mid-1);
    reverseStr(str, mid+1, e);

    cout << str;
 return 0;
}