#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={-2,-5,-1,1,43,-23,32,-56,67};
    int n= sizeof(arr)/sizeof(arr[0]);
    //Taking two pointers left and right
    int left=0;
    int right=n-1;
    
    while (left<=right){
        
        while (arr[left]<0){
            left++;
        }
        while (arr[right]>0){
            right--;
        }
        
        if (left>=right)break;  //edge case when everything is sorted they might cross each other
        

        swap(arr[left],arr[right]);
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
    return 0;
}

// TIME COMPLEXITY FOR THIS IS O(n) AND FOR FOLLOW UP QUESTION THERE IS THE ARRAY SHOULD ALSO BE SORTED FOR WHICH WE USE MERGE OR HEAP SORT WHICH HAS TIME COMPLEXITY OF O(nlogn)