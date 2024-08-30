#include<iostream>
#include<stack>
#include<string>
using namespace std;

// string reverseString(const string&str ){
//     stack<char> st;
//     string ans;

//     for(int i=0;i<str.size();i++){
//         st.push(str[i]);
//     }

//     while(!st.empty()){
//         ans = ans + st.top();
//         st.pop();
//     }
//     return ans;

// }

// int main()
// {
//     string str = "NITIN RACECAR NITIN";
//     string ans = reverseString(str);

//     cout << "Reverse the String :" << ans << endl;
//  return 0;
// }

class Stack {
    int* arr;
    int size;
    int top;

public:
    Stack(int size) {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data) {
        if(top == size-1){
            cout << "Stack is overflow" << endl;
        }
        else{
            top++;
            arr[top] = data;
        }
    }

    void pop() {
        if(top == -1){
            cout << "Stack is Underflow" << endl;
            return;
        }
        else
            top--;
    }

    void isEmpty() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        }
        else {
            cout << "Stack is Not empty" << endl;
        }
    }

    int getTop() {
        if(top == -1){
            cout << "Stack is Empty" << endl;
            return -1;
        }
        else
            return arr[top];
    }

    int sizeOf() {
        return top + 1;
    }

    void print() {
        cout << "Top: " << top << endl;
        cout << "Top Element: " << getTop() << endl;
        cout << "Stack: ";
        for (int i = 0; i < sizeOf(); i++)
        {
                cout << arr[i] << " ";
        }

        cout << endl << endl;
        

    }
};

int main(){
    Stack s(5);
    s.push(10);
    s.print();

    s.push(20);
    s.print();

    s.pop(); 
    s.print();

    s.pop();
    s.print();

   

    // s.isEmpty();
    // cout << s.sizeOf();

    return 0;
}