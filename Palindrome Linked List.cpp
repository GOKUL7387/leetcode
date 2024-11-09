link: https://leetcode.com/problems/palindrome-linked-list/description/?envType=problem-list-v2&envId=linked-list

code:

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>a;
        vector<int>b;
        while(head!=NULL)
        {
            a.push_back(head->val);
            b.push_back(head->val);
            head=head->next;
        }
        reverse(b.begin(),b.end());
        if(a==b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
