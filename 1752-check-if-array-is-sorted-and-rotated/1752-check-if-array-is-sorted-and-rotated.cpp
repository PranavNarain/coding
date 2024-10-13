class Solution {
public:
    bool check(vector<int>& nums) {
        int n=*max_element(nums.begin(),nums.end());
        int i=0;
        bool check=false;
        while(i<nums.size()-1){
            if(nums[i]<=nums[i+1]){
                i++;
                continue;
            } 
            else{
                if(nums[i]==n){
                    if(!check){
                    check=true;
                    i++;
                    continue;
                }else {
                    if(nums[i]!=nums[i-1]) return false;
                    else i++;
                    
                } 
                } 
                else return false;
            }
        }
        if(nums[i]>nums[0] && nums[i]!=n) return false;

         return true;

        
    }
};