#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,3,1,4};
    int n=4;
//=========Handelling edge cases
    if (n<=1){
        return 0;//length of array is 1
    }

    if (arr[0]==0){ // first element is 0
        return-1;
    }
//=========Handelling edge cases

    int jump=1; // becouse loop will start from i=1
    int steps=arr[0];
    int maxSteps=arr[0];
    for (int i = 1; i < n-1; i++){
        if (i==n-1){
            return jump;
        }
        
        maxSteps=max(maxSteps,i+arr[i]);
        steps--;

        if (steps==0){
            jump++;

            if (i>=maxSteps){
                return -1;
            }
            
            steps=maxSteps-i;
        }
        
    }
    cout<<jump;
    return 0;
}