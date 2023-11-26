//  Input: ar1[] = {10}, ar2[] = {2, 3}
// Output: ar1[] = {2}, ar2[] = {3, 10}  

// Input: ar1[] = {1, 5, 9, 10, 15, 20}, ar2[] = {2, 3, 8, 13}
// Output: ar1[] = {1, 2, 3, 5, 8, 9}, ar2[] = {10, 13, 15, 20}


//we will use shell sort here
#include<bits/stdc++.h>
using namespace std;

void swapIfGreater(int arr1[], int arr2[], int ind1, int ind2) {
    if (arr1[ind1] > arr2[ind2]) {
        swap(arr1[ind1], arr2[ind2]);
    }
}

int main()
{
    int arr1[] = {1, 5, 9, 10, 15, 20}, arr2[] = {2, 3, 8, 13};
    int n=6;
    int m=4;
    int len=m+n;//total length of merged array
    int gap=(len/2)+(len%2); // modolus done so that ciel value can be found


    while (gap>0){
        int left=0;
        int right=left+gap;

        // loop will work untill right pointer dosent reach the end of total length of merged array
        while(right<len){ 
            
            if (left < n && right >= n) {
                // (right-n) will give you the corresponding index of arr 2 wrt (len) of merged array
                swapIfGreater(arr1, arr2, left, right - n);
            }
            // case 2: both pointers in arr2[]:
            else if (left >= n) {
                swapIfGreater(arr2, arr2, left - n, right - n);
            }
            // case 3: both pointers in arr1[]:
            else {
                swapIfGreater(arr1, arr1, left, right);
            }

            left++, right++;
            
        }

        if (gap == 1) break;

        // Otherwise, calculate new gap:
        gap = (gap / 2) + (gap % 2);

    }
    
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    
    return 0;
}