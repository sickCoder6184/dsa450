#include <bits/stdc++.h>
using namespace std;

void findKthmaxmin(int arr[],int n,int k){

    int ans=k;
    sort(arr,arr+n); //it takes two parametere beg and ending
    
    cout<<arr[k-1];

}

int main()
{
    int k;
    cout<<"enter the kth element"<<endl;
    cin>>k;
    int arr[]={1,3,56,645,54,32,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    findKthmaxmin(arr,n,k);
    return 0;
}

//We can do this question by heap sort also which will take O(N)+O(k-1*logn)
//this will take nlogn as we are using trim sort here