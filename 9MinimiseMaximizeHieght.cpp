// minimise the maximize difference between the tower of hieghts ny K

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {23, 1, 4, 5, 24, 56, 89};
    int n = 7;
    sort(arr, arr + n); // it takes two parametere beg and ending

    int diff = arr[n - 1] - arr[0];

    int k = 3;

    // After sorting

    int minHieght, maxHieght;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - k < 0)
            continue; // if any ith value of arr is becoming negative just continue to next iteration

        minHieght = min(arr[0] + k, arr[i] - k); // checking if any tower beat in the race of becoming smallest from the first tower

        maxHieght = max(arr[n - 1] - k, arr[i - 1] - k); // checking if any tower beat in the race of becoming tallest from the last tower

        diff = min(diff, maxHieght - minHieght); // getting the min difference
    }

    cout << "the answer is: " << diff << endl;
    return 0;
}

// TIme complexity here is O(n)