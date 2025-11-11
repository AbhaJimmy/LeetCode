// LeetCode - 2643 - Row with maximum ones
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countOnes(vector<int> row, int m) {
        int count = 0;
        for (int i=0; i<m; i++) {
            if (row[i] == 1) count++;
        }
        return count;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size(), count=INT_MIN;
        vector<int> result = {-1,-1};
        for (int i=0; i<n; i++) {
            count = countOnes(mat[i],m);
            if (count > result[1]) {
                result[0] = i;
                result[1] = count;
            }
        }
        return result;
    }
};