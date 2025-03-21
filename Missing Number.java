link : https://leetcode.com/problems/missing-number/description/?envType=problem-list-v2&envId=array

code:

class Solution {
    public int missingNumber(int[] nums) {
        Arrays.sort(nums);
        int count=0;
        for(int i=0;i<nums.length;i++)
        {
            if(i==nums[i])
            {
                count++;
                continue;
            }
            return i;
        }
        return nums.length;
    }
}
