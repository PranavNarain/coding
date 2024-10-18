class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> v;
        int count=0;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            auto it=find(v.begin(),v.end(),s[i]);
            if(it!=v.end()){
                v.erase(v.begin(),it+1);
            }
                v.push_back(s[i]);
            maxi=max(maxi,(int)v.size());
            

        }
        return maxi;
        
    }
};