#include"iostream"
using  namespace std;

void numToDigit(int n) {
    int nextDigit=0;
    for (int i = 0; i < n; i++)
    {
        int newDigit;
        cout << "Enter Digit" << endl;
        cin >> newDigit;
        nextDigit = nextDigit * 10 + newDigit;

        cout << "The digit is contain:" << nextDigit << endl;
    }
    
}

int main()
{
    int n;
    cout <<"Enter How many number:" << endl;
    cin >> n;
    numToDigit(n);
    return 0;
}
