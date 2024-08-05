#include <iostream>
#include <string>
using namespace std;

string reverseStr( string str) {
    if (str.empty())
        return "";

    return reverseStr(str.substr(1)) + str[0];
}

int main() {
    string str ;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string: " << reverseStr(str) << endl;

    return 0;
}
