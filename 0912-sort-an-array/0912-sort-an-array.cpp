class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = 1; i < n; i *= 2) {
            for (int j = 0; j < n - i; j += 2 * i) {
                int l = j;
                int m = j + i - 1;
                int r = min(j + 2 * i - 1, n - 1);
                vector<int> temp;
                int k = l;
                int x = m + 1;
                while (k <= m && x <= r) {
                    if (nums[k] <= nums[x])
                        temp.push_back(nums[k++]);
                    else
                        temp.push_back(nums[x++]);
                }
                while (k <= m)
                    temp.push_back(nums[k++]);

                while (x <= r)
                    temp.push_back(nums[x++]);

                for (int k = 0; k < temp.size(); k++)
                    nums[l + k] = temp[k];
            }
        }
        return nums;
    }
};
