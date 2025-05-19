/*Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

Example 1:

Input: nums = [1, 2, 3, 3]

Output: true

Example 2:

Input: nums = [1, 2, 3, 4]

Output: false*/

class Solution {
    public boolean hasDuplicate(int[] nums) {
        int size = nums.length;
        HashSet<Integer> hash = new HashSet<>();
        for(int i=0;i<size;i++){
            if(hash.contains(nums[i])) return true;
            else hash.add(nums[i]);
        }
        return false;
    }
}
