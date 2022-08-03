// Input: nums = [1,5,0,3,5]
// Output: 3
// Explanation:
// In the first operation, choose x = 1. Now, nums = [0,4,0,2,4].
// In the second operation, choose x = 2. Now, nums = [0,2,0,0,2].
// In the third operation, choose x = 2. Now, nums = [0,0,0,0,0].




int minimumOperations(vector<int>& nums) {

      
      sort(nums.begin(),nums.end());
        int count = 0 ;
        
      for(int i = 0;i<nums.size();i++){
          if(nums[i]>0){
              int x = nums[i];
              count++;
              for(int j = i;j<nums.size();j++){
                  nums[j]= nums[j]-x;
                  
              }
              
          }
          
      }
        
        return count;
        
        
}