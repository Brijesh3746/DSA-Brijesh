#include <iostream>
#include <vector>
#include <algorithm> // Include this header for the sort function

using namespace std;

bool muycom(char&a,char&b){
    return a > b;
}

int main()
{
    // vector<char> str = {'b', 'c', 'a', 'd'};
    string order = "cba";
    string s = "abcd"
    // for (int i = 97; i < 123; i++)
    // {
    //     str.push_back((char)i);
    // }
    sort(str.begin(), str.end(),muycom);
    
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
    
    return 0;
}
