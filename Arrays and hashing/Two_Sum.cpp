/*Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.

You may assume that every input has exactly one pair of indices i and j that satisfy the condition.

Return the answer with the smaller index first.

Example 1:

Input: 
nums = [3,4,5,6], target = 7

Output: [0,1]
Explanation: nums[0] + nums[1] == 7, so we return [0, 1].

Example 2:

Input: nums = [4,5,6], target = 10

Output: [0,2]*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        int size = nums.size();

        for(int i=0;i<size;i++) hash[nums[i]] = i;
        for(int i=0;i<size;i++){
            int count = target - nums[i];
            if(hash[count] && hash[count]!=i) return {i,hash[count]};
        }  
        return {0};
    }
};
