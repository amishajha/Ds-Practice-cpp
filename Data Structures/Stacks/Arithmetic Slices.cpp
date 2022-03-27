#include<iostream>
using namespace std;



 int numberOfArithmeticSlices(vector<int>& nums) {

 	int count = 0; int ret = 0;
        if(nums.size() < 3) return 0;
      for(int i = 1;i < nums.size()-1;i++){
          if(nums[i]-nums[i-1]==nums[i+1]-nums[i]){
          ret+= ++count;
          }
          else {
              count = 0;
              
          }
          
      }
        
        return ret;  
        
        
        
 }


int main(){


	vector<int>nums={1,2,3,4};
	int ans = numberOfArithmeticSlices(nums);
	cout<<ans;

}