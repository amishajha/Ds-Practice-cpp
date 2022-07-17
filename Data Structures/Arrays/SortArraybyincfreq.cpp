class Solution {
public:
     static bool cmp(pair<int,int>a,pair<int,int>b)
       {
        if(a.first!=b.first){
            return a.first<b.first;
        }
        else{
            return a.second>b.second;

        }
        }
      }    
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>p;

        for(auto x:nums){
            mp[x]++;
        }
        vector<pair<int,int>>ans;
        for(auto y:mp){
           ans.push_back({y.second,y.first});

        }

        sort(ans.begin(),ans.end(),cmp);

        for(auto x:ans){
            while(x.first--){
                p.push_back(x.second);

            }
        }
      
       
        
    }
};