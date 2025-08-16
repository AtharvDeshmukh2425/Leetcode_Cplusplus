// Approach 1: Counting sort (Two-pass solution)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count0 = 0, count1 = 0, count2 = 0;
        
        // Count occurrences of 0, 1, and 2
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) count0++;
            else if (nums[i] == 1) count1++;
            else count2++;
        }
       
        // Overwrite array based on counts
        for (int a = 0; a < n; a++) {
            if (a < count0) nums[a] = 0;               // First count0 elements → 0
            else if (a < count0 + count1) nums[a] = 1; // Next count1 elements → 1
            else nums[a] = 2;                          // Remaining elements → 2
        }
    }
};


/* 
Approach 2: Dutch National Flag Algorithm (One-pass solution)
- Maintains three pointers: low, mid, high
- Places 0s at the beginning, 2s at the end, and 1s in the middle
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;

        // Process elements until mid crosses high
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]); // Place 0 at the start
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++; // 1 is already in correct middle section
            }
            else { // nums[mid] == 2
                swap(nums[mid], nums[high]); // Place 2 at the end
                high--;
                // Notice: we don't increment mid here, because the swapped value at mid needs to be checked
            }
        }
    }
};
