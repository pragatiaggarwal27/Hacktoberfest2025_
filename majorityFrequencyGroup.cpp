class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        unordered_map<int,int>mp2;
        for(auto it:mp){
            mp2[it.second]++;
        }
        string ans;
        int maxi=INT_MIN;
        int f=-1;
        for(auto it:mp2){
            if(it.second>maxi){
                maxi=it.second;
                f=it.first;
            }else if( it.second==maxi){
                 if(it.first>f){
                  maxi=it.second;
                  f=it.first;
                 }
            }
        }
        for(auto it:mp){
            if(f==it.second){
                ans+=it.first;
            }
        }
        return ans;
        
    }
};
