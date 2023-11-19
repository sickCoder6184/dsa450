#include<bits/stdc++.h>
using namespace std;

// void rotateKtimes(int arr[],int k , int size){
//     for (int i = 0; i < size; i++)
//     {
//         int temp=(i+k)%(size);
//         arr[i]=arr[temp];
//     }
    
//     cout<<"rotated array is: "<<endl; 

// }
void reverseArray(int arr[],int start ,int end){
    for (int i = start, j=end; i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    
    
}
int main()
{
    int arr[]={1,4,2,54,64,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter the no. of times to rotate array"<<endl;
    cin>>k;
    k=k%n;

    reverseArray(arr,0,n-1);
    reverseArray(arr,0,k-1);
    reverseArray(arr,k,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }

    return 0;
}

//Optimised approach TC=O(n) SC=O(1)