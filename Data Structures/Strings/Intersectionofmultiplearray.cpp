class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>res(1001,0);
        for(int i = 0 ;i<nums.size();i++){
            for(int j = 0;j<nums[i].size();j++){
               res[nums[i][j]]++;
            }
        }
        int count = nums.size();
        vector<int>ans1;
        for(int i = 0 ;i<res.size();i++){
            if(count == res[i])
               ans1.push_back(i);
            
            }
        
        return ans1;
        
    }
};