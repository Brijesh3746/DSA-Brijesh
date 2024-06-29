#include <iostream>
using namespace std;

int findMissingElement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        int diff = (arr[mid] - mid);
        if (diff == 1)
        {
            
            // right move -> bcz in binary search 
            // if mid element diff is 1 then left all ele diff is 1;
            s = mid + 1;
            if (s == e)
            {
                return n + 1;
            }
            
        }
        else{
            // why ans store in this bcz 
            // ye index apka pattern change hone wala index ho
            // iska matlak iski left sab sahi ho 
            ans = mid;

            // left side move > bcz agar apka mid hi sahi nahi 
            // to uske aga vala element kaise sahi hoga
            e = mid - 1;
        }

        // mistake chance here bcz mid set nahi hua 
        // start or end ke update ke bad
        mid = s + (e - s) / 2;
    }
    return ans + 1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9};
    int n = 8;

    cout << "Missing Element is :"<<findMissingElement(arr,n);

    return 0;
}