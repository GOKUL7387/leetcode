link: https://leetcode.com/problems/climbing-stairs/description/

code:

class Solution {
    public int climbStairs(int n) {
        if (n <= 2) 
        {
            return n;
        }
        int x = 1;
        int y = 2;
        int current = 0;
        for (int i = 3; i <= n; i++) {
            current = x+y;
            x=y;
            y=current;
        }
        return current;

    }
}
