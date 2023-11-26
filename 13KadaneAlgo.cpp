
#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maxi = LONG_MIN; // maximum sum
    int sum = 0;

    int start = 0;
    int ansStart = -1, ansEnd = -1; // this will track the subarray

    for (int i = 0; i < n; i++) {

        if (sum == 0) start = i; // starting index whenever the sum will be equal to zero

        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;

            ansStart = start;
            ansEnd = i;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0) {
            sum = 0;
        }
    }

    //printing the subarray:
    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    cout << "]n";

    // To consider the sum of the empty subarray

    if (maxi < 0) maxi = 0; // if no subarray is found this code will run

    return maxi;
}

int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}
