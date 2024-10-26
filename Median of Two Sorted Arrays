link: https://leetcode.com/problems/median-of-two-sorted-arrays/description/

code:

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a;
        double x;
        for(int i=0;i<nums1.size();i++)
        {
            a.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            a.push_back(nums2[i]);
        }
        sort(a.begin(),a.end());
        if(a.size()%2!=0)
        {
            x=a[a.size()/2];
        }
        else
        {
            x=(a[a.size() / 2 - 1] + a[a.size() / 2]) / 2.0;
        }
        return x;

    }
};
