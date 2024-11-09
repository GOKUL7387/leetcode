link: https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/

code:

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = nums[0];
        int max = nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max = nums[i];
            }
            else if(nums[i]<min)
            {
                min = nums[i];
            }
        }
        while((min%max)!=0)
        {
            int temp = max;
            max = min%max;
            min = temp; 
        }
        return max;
    }
};
