#include <iostream>
using namespace std;

void maxMin(int arr[],int size){
    int min=arr[0];
    int max=arr[0];
    for (int i = 1; i < size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
        else if(arr[i]>max){
            max=arr[i];
        }
        else{
            continue;  //it will not change code if the numbers are qual
        }
         
    }
    cout<<"max element is: "<<max <<endl;
    cout<<"min element is: "<<min <<endl;

    
}

int main()
{
    int arr[]={40,-4,2,3,-4,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxMin(arr,n);

    return 0;
}