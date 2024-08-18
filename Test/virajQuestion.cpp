#include<iostream>
#include<string>
using namespace std;

void replaceChar(string &str,int index,char ch){

    char c;

    cout << "Enter Your Ch in In Place Of " << ch << " : ";
    cin >> c;

    str[index] = c;

}

void replaceWord(string &str,int cnt,char ch){
    int index;

    for(int i=0 ; i<str.size();i++){
        if(str[i] == ch){
            cnt--;
            if(cnt == 0){
                index = i;
                break;
            }
        }
       
    }

    replaceChar(str, index, ch);


}

int main()
{
    string str;// = "babbar";
    cout << "Enter Str: " << endl;
    getline(cin,str);

    char ch;// = 'a';
    cout << "Which Ch You can replace: "<< endl;
    cin >> ch;

    int cnt;// = 2;
    cout << "Number of Count : " << endl;
    cin >> cnt;

    cout << "Before :" << str<< endl;

    replaceWord(str,cnt,ch);

    cout << "After :" << str;
 return 0;
}