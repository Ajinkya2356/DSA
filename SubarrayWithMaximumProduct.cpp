// Problem statement
// Given an array ‘Arr’ that has ‘N’ elements. You have to find the subarray of ‘Arr’ that has the largest product. You must return the product of the subarray with the maximum product.
// For example:
// When ‘N’ = 5, and ‘Arr’ = {-2, 3, -4, 0}
// The subarrays of ‘Arr’ are:
// {-2}, {-2, 3}, {-2, 3, -4}, {-2, 3, -4, 0}, {3}, {3, -4}, {3, -4, 0}, {-4}, {-4, 0}, {0}.
// Among these, {-2, 3, -4} is the subarray having the maximum product equal to 24.
// Hence, the answer is 24.
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=1,suff=1;
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(pre==0) pre=1;
            if(suff==0) suff=1;
            pre=pre*nums[i];
            suff=suff*nums[n-i-1];
            ans=max(ans,max(pre,suff));
        }
        return ans;
    }
};
