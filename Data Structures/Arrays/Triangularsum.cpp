#include<iostream>
using namespace std;

 int triangularSum(vector<int>& nums) {
        for(int i = nums.size();i>=1;i--){
           for(int j = 0;j<i-1; j++){
           	nums[j] = (nums[j] + nums[j+1])%10;

           }

        }
        
        
     return nums[0];   
        
 }

int main()
{

	vector<int>nums = {1,2,3,4,5};
	
	cout<<triangularSum(nums)<<endl;

	
	return 0;
}