#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int idx = abs(nums[i]) ; 

            //we are doing abs of nums[i] because we might mark that element at negative and array do not have negative idx and hence we make it positive for checking that indexed element.

            if (nums[idx] < 0)
                return idx ; 

            nums[idx] = -nums[idx];
        }

        return -1; // Return -1 if no duplicate is found
    }
};

int main() {
    Solution solution; // Create an instance of the Solution class
    // Example usage:
    vector<int> nums = {1, 3,3,3, 4, 2};
    cout << "Duplicate: " << solution.findDuplicate(nums) << endl;

    return 0;
}
