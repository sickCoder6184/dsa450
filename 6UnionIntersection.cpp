

#include <bits/stdc++.h>

using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int arr1Size, int arr2Size)
{
    int i = 0, j = 0;  // TWO pointers
    vector<int> Union; // Uninon vector
    while (i < arr1Size && j < arr2Size)
    {
        if (arr1[i] <= arr2[j]) // Case 1 and 2
        {
            if (Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else // case 3
        {
            if (Union.size() == 0 || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    while (i < arr1Size) // IF any element left in arr1 means second arr is exhausted
    {
        if (Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while (j < arr2Size) // If any elements left in arr2 means first arr is exhausted
    {
        if (Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}

vector<int> FindIntersection(int arr1[], int arr2[], int arr1Size, int arr2Size)
{
    int i = 0;
    int j = 0;
    vector<int> Intersection; // intersection vector
    while (i < arr1Size && j < arr2Size)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }

        //if they exsists in pair
        else
        {
            Intersection.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return Intersection;
}

int main()

{
    int arr1Size = 10, arr2Size = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = FindUnion(arr1, arr2, arr1Size, arr2Size);

    vector<int> Intersrction = FindIntersection(arr1, arr2, arr1Size, arr2Size);

    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto &val : Union)
        cout << val << " ";

    cout<<"============"<<endl;
    cout << "Intersection of arr1 and arr2 is  " << endl;

    for (auto &val : Intersrction)
        cout << val << " ";
    return 0;
}
