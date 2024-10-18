class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum=max(sum+nums[i],nums[i]);
            // if(sum>ans) ans=sum;
            ans=max(ans,sum);
        }
        return ans;
        
    }
};