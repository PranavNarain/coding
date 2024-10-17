class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        map<int,int> m1;
        for(auto c: nums){
            m1[c]++;
        }
        for(auto i:m1){
            // if(n<3) return nums;
            if((n/3)<i.second){
                v.push_back(i.first);
                continue;
            } 
        }
         return v;       
    }
};