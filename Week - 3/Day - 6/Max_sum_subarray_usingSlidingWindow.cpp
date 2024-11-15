/*
 Author : YEASIN ARAFAT 
 SOURCE : https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
*/

class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
            long long sum = 0,ans = 0;
            int l =0,r=0;
        while(r<n)
        {
            
            sum+=arr[r];
            
            if(r-l+1==k)
            {
                ans = max(sum,ans);
                sum-=arr[l];
                l++;
            }
            r++;
        }
        return ans;
    }
};