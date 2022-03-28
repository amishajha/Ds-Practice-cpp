#include<iostream>
using namespace std;

bool search(vector<int>nums,int target){
    
    int start = 0;
    int end = nums.size()-1;
    while(start<end){
    	int mid=start+(end-start)/2;
    	if(nums[mid==target]){
    		return true;
    	}
        if(nums[mid]<nums[end]){
            
             if(target>nums[mid] && target<=nums[r]){
             	start = mid+1;

             }
             else {

                     end= mid-1;



             }





        }



        else if (nums[m]>nums[r]){
        	if(target<nums[mid]&& target>=nums[start]){
        		end= mid-1;

        	}
        	else {
        		start = mid+1;
        	}
        }
        else {
        	end--;
        }
    }



}


int main(){
   

      vector<int>nums = {2,5,6,0,0,1,2};
      int target = 0;
      cout<<search(nums,target);

















}