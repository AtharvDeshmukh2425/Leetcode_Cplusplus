class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> out;

        // Mark visited numbers
        for (int i = 0; i < n; i++) {
            int a = abs(nums[i]) - 1;      // find index for current number
            if (nums[a] > 0) {             // only mark if positive
                nums[a] = -nums[a];
            }
        }

        // Collect missing numbers
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                out.push_back(i + 1);      // i+1 is missing
            }
        }

        return out;
    }
};
