link: https://leetcode.com/problems/merge-sorted-array/description/?envType=problem-list-v2&envId=array&difficulty=EASY

code:

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>a;
        for(int i=0;i<m;i++)
        {
            a.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++)
        {
            a.push_back(nums2[i]);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
        {
            nums1[i]=a[i];
        }
    }
};
