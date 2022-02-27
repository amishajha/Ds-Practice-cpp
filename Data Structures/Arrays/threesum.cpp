#include<iostream>
using namespace std;



vector<vector<int>>threeSum(vector<int>&nums){

         vector<vector<int>>vec;
         int n=nums.size();
         sort(nums.begin(),nums.end());
         int l,r;
         for(int i=0;i<n-1;i++){

               
               if(i==0||i>0 and nums[i]!=nums[i-1]){

                  l=i+1;
                  r=n-1;
                  while(l<r){
                       if(nums[i]+nums[l]+nums[r]==0){
                       	vector<int>ans={nums[i],nums[j],nums[k]};
                       	vec.push_back(ans);
                       	while(l<r and nums[l]==nums[l+1])l++;
                       	while(l<r and nums[r]==nums[r-1])r--;


                       	l++;
                       	r--;




                       	else if(nums[i]+nums[l]+nums[r]<0) l++;
                       	else r--;

                       }















                  }

                          







               }









         }

         return vec;






}










int main(){


      

























}