#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
// // Function to reverse a string in place
// void reverseString(char* str, int length) {
//     int start = 0;
//     int end = length - 1;
//     while (start < end) {
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
//         start++;
//         end--;
//     }
// }

// // Function to split a string into words and reverse each word
// void reverseWords(char* input) {
//     int length = strlen(input);
//     int wordStart = -1;

//     for (int i = 0; i <= length; ++i) {
//         if (input[i] == ' ' || input[i] == '\0') {
//             if (wordStart != -1) {
//                 reverseString(input + wordStart, i - wordStart);
//                 wordStart = -1;
//             }
//         } else {
//             if (wordStart == -1) {
//                 wordStart = i;
//             }
//         }
//     }
// }

// int main() {
//     char input[] = "Love Babbar";
    
//     std::cout << "Input: " << input << std::endl;
    
//     reverseString(input,strlen(input));
    
//     std::cout << "Output: " << input << std::endl;

//     return 0;
// }

int main() {
   
//    int n;
//    cin >> n;
//    vector<bool>prime(n,true);

//    for (int  i = 0; i < n; i++)
//    {
//     cout << i << ": " << prime[i] <<endl; 
//    }
//    int arr[5] = {1,2,3,4,5};
//    int* p = &arr[1];
//    cout << p;
// //    cout << arr[0];



    // char ch[] = "ABCD";
    int *ch = new int[5];
    // cout << *(ch)<< endl;
    // char* p = ch;
    // cout << "s[0] : " << ch[0] << " p[0] : " << p[0];
    for (int i = 0; i < 5; i++)
    {
        ch[i] =  i+1;
    }
    
    delete[] ch;
    ch = nullptr;
    // cout << ch[3];  
    return 0;
}

