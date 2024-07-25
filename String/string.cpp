#include<iostream>
#include<string.h>
#include <string>
#include <vector>

using namespace std;
//string is not autometic pass by refrence 
// char arr is pass by ref 
// arr is pass by ref
void reversString(string &s) 
{
    int i = 0;
    int j = s.length()- 1;
    while (i < j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
    
}

int main(){


    string str1 = "Brijesh";
    string str2 = " Patel";


    // cout << "Length of String is : " << str1.length() << endl;
    // cout << "Check the String is empty or not : " << str2.empty() << endl;
    // cout << "Character at 0 index : " << str1.at(0)<<endl;

    // cout << "First element of string : " << str1.front() << endl;
    // cout << "Last element of string : " << str1.back() << endl;

    // cout << "Befor appending" << endl;
    // cout << "String 1 : " << str1 << endl;
    // cout << "String 2 : " << str2 << endl;

    // str1.append(str2);

    // cout << "After appending" << endl;
    // cout << "String 1 : " << str1 << endl;
    // cout << "String 2 : " << str2 << endl;

    // string a = "hello";
    // cout << a.substr(1,3);

    // string desc = "This is my cricket Ground";
    // cout << desc.erase(5,5);
    // // which index to start,how many character should erase

    // string name = "Brijesh Varsani";
    // string middle = "Kumar ";
    
    // cout << name.insert(8,middle) << endl;
    // // kis index pe insert krna,kya insert krna hai

    // string a = "ramu aur shayamu is cleaver";
    // string b = "shyamu";

    // // find return a first character index
    // if (a.find(b) == string::npos)
    // {
    //     cout << "Not Found \n";

    // }
    // else{
    //     cout << "Found \n";
    // }
    

    // string a  = "ram";
    // string b = "ram";
    // // here 0 means found and 1 means not found

    // if (a.compare(b)== 0)
    // {
    //     cout << "Matching\n";
    // }
    // else{
    //     cout << "NOt matching";
    // }
    

    // string s  = "this is my car in lobby";

    // cout << s.substr(1) << endl; 
    // start with which index,and how many character should 

    // length
    // empyty
    // append
    // at
    // find
    // compare
    // substr
    // front
    // back
    // erase
    // insert
    // push_back
    // pop_back



    // string name;

    // cin >> name;
    // getline(cin,name);
    // cout << "Name is :" << name << endl; 



    // reversString(name);
    // cout << "After reverse :"<< name << endl;

    // string s;
    // cin >> s;
    // cout << "Before:"<<(int)s[6] << endl;
    // s.push_back('c');
    // cout << "after:"<<(int)s[6] <<endl;
    // cout << s;
 
 
    vector<string> s = {"23:59", "00:00"};
    for (int i = 0; i < s.size(); i++)
    {
        int hour = stoi(s[i].substr(0,2));
        int min =  stoi(s[i].substr(3,2));

        int diff = ((hour*60)+min)

        // cout << hour << " " << min ;
    }
    
 return 0;

}