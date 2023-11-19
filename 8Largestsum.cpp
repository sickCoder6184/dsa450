#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {-1,-2,7,2,3,-9,-3,-4};
    int n=8;
    int maxi=INT32_MIN;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=max(arr[i],sum+arr[i]);
        if (maxi<sum)
        {
            maxi=sum;
        }
        
        
    }
    
    cout<<maxi;

    return 0;
}