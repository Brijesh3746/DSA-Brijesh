#include<iostream>
using namespace std;

int getDivideAns(int dividend,int divisor)
{
    int s = 0;
    int e = dividend;
    int ans = 0;

    while (s <= e)  
    {
        int mid = s + (e - s)/2;

        if (mid  * divisor == dividend)
        {
            return mid;
        }
        else if (mid * divisor < dividend)
        {
            ans = mid;

            // right 
            s = mid + 1;
        }
        else
        {
            // left
            e = mid - 1;
        }
        
        
    }
    return ans;
}

// double getAns(double dividend,double divisor,double pres)
// {
//     double s = 0;
//     double e = dividend;
//     double ans = 0;
//     double mid;

//     while (e - s > pres)  
//     {
//          mid = s + (e - s)/2;

//        if (mid * divisor < dividend)
//         {
//             ans = mid;

//             // right 
            
//         }
//         else
//         {
//             // left
//             e = mid;
//         }
        
        
//     }
//     return mid;
// }

int main()
{
    int dividend = -29;
    int divisor = -1;

    // double a = 29;
    // double b = 7;

    // double res = getAns(a,b,4);
    // cout << "res : " << res << endl;


    // abs ka mtlab tum postive bhejo ki neg vo sirf value lega 
    // sigh nahi -> every time positive
    int ans = getDivideAns(abs(dividend),abs(divisor));


    if ( (dividend > 0 && divisor < 0 ) || (dividend < 0 && divisor > 0 ))
    {
        ans = 0 - ans;
    }

    cout << "Ans is By Binary Search is: " << ans; 

    
 return 0;
}