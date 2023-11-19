#include <bits/stdc++.h>
using namespace std;

void dutchAlgo(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while (mid<high){
        if (arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;mid++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }  
    }

    for (int i = 0; i < n; i++){
        cout<<arr[i];
    }

}

int main(){
    int arr[]={1,0,2,1,0,2,0,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    dutchAlgo(arr,n);
    return 0;
}

// This algorithim uses O(n) time complexity takes three pointer
// low mid high where 
// 0 to low-1=>[00000] low to mid-1=>[11111] high+1 to n-1=>[22222]