#include<iostream>
#include<string.h>
using namespace std;

int findLength(char ch[],int n)
{
    int i=0;
    while (ch[i] != '\0')
    {
        i++;
    }
    
    return i;
}

void reverseString(char ch[])
{
    int s = 0;
    int e = strlen(ch) - 1;
    while (s < e)
    {
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}

void toUpperCase(char ch[])
{
    int i = 0;
    while (ch[i] != '\0')
    {   
        char currCh = ch[i];
        if (currCh >= 'a' && currCh <= 'z') 
        {
            // ch[i] = currCh - 'a' + 'A';
            ch[i] = currCh - 32;

        }
        i++;
    }
}

void replaceWithSpace(char ch[],int n)
{
    int i = 0;
    while (ch[i] != '\0') 
    {
        if (ch[i] == '@')
        {
            ch[i] = ' ';
        }
        i++;
        
    }
    
}   

bool palindrome(char ch[])
{
    int i = 0;
    int j = strlen(ch) - 1;
    while (i < j)
    {
        if (ch[i] == ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{

    char ch[100];

    // cin >> ch;
    cin.getline(ch,100);

    // findLength(ch,100); -> preDefine strlen
    // reverseString(ch); -> strrev
    // strrev(ch);
    // cout << "Before: " << ch << endl;
    // toUpperCase(ch);
    // replaceWithSpace(ch,100);
    
    // cout << "After: "<<ch;
    
    // cout << "length of string is: " << findLength(ch,100)<<endl;
    // cout << "length of string is: " << strlen(ch);


    if (palindrome(ch))
    {
        cout << "valid " << endl;
    }
    else    
        cout << "Not Valid" << endl;
    
 return 0;
}