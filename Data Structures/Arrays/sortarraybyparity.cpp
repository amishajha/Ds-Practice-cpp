class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
        vector<int>odd,even;
        for(int i =0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        
        
        int j =0;
        int k = 0;
        int m = even.size();
        int n = odd.size();
        while(j!=m){
            
            ans.push_back(even[j++]);
            
            
        }
        
        while(k!=n){
            ans.push_back(odd[k++]);
        }
        
        
        return ans;
    }
};