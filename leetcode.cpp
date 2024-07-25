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
   
   int n;
   cin >> n;
   vector<bool>prime(n,true);

   for (int  i = 0; i < n; i++)
   {
    cout << i << ": " << prime[i] <<endl; 
   }
   
    return 0;
}

