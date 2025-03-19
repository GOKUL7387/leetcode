link: https://leetcode.com/problems/check-balanced-string/

code:

class Solution {
    public boolean isBalanced(String num) {
        int even = 0;
        int odd = 0;
        for(int i=0;i<num.length();i++)
        {
            int x = num.charAt(i)-'0';
            if(i%2==0)
            {
                even=even+x;
            }
            else
            {
                odd=odd+x;
            }
        }
        if(even==odd)
        {
            return true;
        }
        return false;
    }
}
