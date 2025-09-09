// LeetCode - 350 - Intersection of two arrays II
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        vector<int> result;
        int n=nums1.size(), m=nums2.size(), i=0, j=0;
        for (auto it : nums1) {
            mpp[it]++;
        }
        for (auto it : nums2) {
            if (mpp[it] > 0) {
                result.push_back(it);
                mpp[it]--;
            }
        }
        return result;
    }
};