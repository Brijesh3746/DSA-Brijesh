#include<iostream>
using namespace std;

bool checkFind(const string&ans,char ch){
    for(int i=0;i<ans.size();i++){
        if(ans[i]==ch)
            return false;
    }
    return true;
} 

string revIgnoreDuplicate(const string&str){
    string ans = "";
    ans=str[0];
    for (int i = 1; i < str.length(); i++)
    {
        // if (ans.find(str[i]) == string::npos)
        // {
        //     ans+=str[i];
        // }
        if(checkFind(ans,str[i])){
            ans+=str[i];
        }
        
    }
    
    return ans;
}
int main()
{
    // string str = "NITIN";
    // string ans = revIgnoreDuplicate(str);
    // cout << ans;
    cout << x ;
 return 0;
}