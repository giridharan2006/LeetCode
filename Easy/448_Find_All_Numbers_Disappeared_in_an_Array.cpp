/*Q3. Find All Numbers Disappeared in an Array
Easy
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers 
in the range [1, n] that do not appear in nums.
Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
Example 2:
Input: nums = [1,1]
Output: [2]
Constraints:
n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
 */
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> ans;
        for(int i = 0;i<n;i++){
            int n = std::abs(nums[i]);
            if(nums[n-1] > 0){
                nums[n-1] = -nums[n-1];
            }
        }
        for(int i = 0;i<n;i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
