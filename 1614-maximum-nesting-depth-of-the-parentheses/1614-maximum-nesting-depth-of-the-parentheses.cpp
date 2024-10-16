class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') count++;
            if(s[i]==')'){
                maxi=max(maxi,count);
                count--;
            }
            else continue;
        }
        return maxi;

        
    }
};