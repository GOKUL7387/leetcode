link : https://leetcode.com/problems/three-divisors/?envType=problem-list-v2&envId=math

class Solution {
public:
    bool isThree(int n) {
        int count=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        return count==3;
    }
};
