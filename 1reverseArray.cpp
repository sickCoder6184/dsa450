#include <iostream> 
using namespace std; 

void rvereseArray(int arr[],int n) 
{ 
	for (int i = 0; i < n/2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-i-1]=temp;
    }
    
}	 

void printArray(int arr[], int size) 
{ 
for (int i = 0; i < size; i++) 
cout << arr[i] << " "; 

cout << endl; 
} 

int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5, 6}; 
	
	int n = sizeof(arr) / sizeof(arr[0]); 

	printArray(arr, n); 
	
	rvereseArray(arr,n); 
	
	cout << "Reversed array is" << endl; 
	
	printArray(arr, n); 
	
	return 0; 
} 
