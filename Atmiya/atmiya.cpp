// #include<iostream>
// #include <fstream>
// #include <string>
// using namespace std;


// int main()
// {

//     ifstream inputFile("/input.txt");

//     string line;

//     while (getline(inputFile, line)) {
//         cout << line << endl;
//     }

//     char ch[][7] = {"int","float","char","double"};
//     char op[][2] = {"+","-","=","*"};

//     cout << line ;
//     inputFile.close();
//  return 0;
// }

#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // for isdigit function

using namespace std;

int main() {
    ifstream inputFile("input.txt"); // Ensure the file path is correct

    if (!inputFile) {
        cerr << "Unable to open file";
        return 1;
    }

    string line;
    char ch[][6] = {"int", "float", "char", "bool"};
    char op[][2] = {"+", "-", "=", "*"};

    while (inputFile >> line) {
        bool found = false;

        // Check if the line matches any keyword
        for (int i = 0; i < 4; ++i) {
            if (line == ch[i]) {
                cout << line << " is a keyword" << endl;
                found = true;
                break;
            }
            
        }

        // Check if the line matches any operator
        if (!found) {
            for (int i = 0; i < 4; ++i) {
                if (line == op[i]) {
                    cout << line << " is an operator" << endl;
                    found = true;
                    break;
                }
            }
        }

        // Check if the line is a digit
        if (!found && isdigit(line[0])) {
            bool all_digits = true;
            for (size_t i = 0; i < line.size(); ++i) {
                if (!isdigit(line[i])) {
                    all_digits = false;
                    break;
                }
            }
            if (all_digits) {
                cout << line << " is a digit" << endl;
                found = true;
            }
        }

        // Check if the line is a semicolon terminator
        if (!found && line == ";") {
            cout << line << " is a terminator" << endl;
            found = true;
        }

        // If it's neither a keyword, nor an operator, nor a digit, nor a semicolon, it's an identifier
        if (!found) {
            cout << line << " is an identifier" << endl;
        }
    }

    inputFile.close();
    return 0;
}
