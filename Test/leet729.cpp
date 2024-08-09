#include<iostream>
using namespace std;
int main()
{
    string s = "a-bG-Lp!";

      cout << "Before: " << s << endl;


     int i = 0;
       int j = s.size() - 1;
      while(i < j){

            if(((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90)) &&
                ((s[j] >= 97 && s[j] <= 122) || (s[j] >= 65 && s[j] <= 90))){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
            else if((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90) )
                j--;
            else if((s[j] >= 97 && s[j] <= 122) || (s[j] >= 65 && s[j] <= 90))
                i++;
            else{
                i++;
                j--;
            }
      }

      cout << "After: " << s << endl;



 return 0;
}