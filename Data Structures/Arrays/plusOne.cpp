#include<iostream>
#include<vector>
using namespace std;


vector<int>plusone(vector<int>&nums){
          



         int n= nums.size()-1;


         for(int i=n;i>=0;i--){

             if(nums[i]==9){
             	nums[i]=0;

             }



             else{

                 nums[i]++;
                 return nums;




             }


             nums[0]=1;
             nums.push_back(0);
             return nums;







         }






}












int main(){

   vector<int>nums{1,2,3};
   vector<int>ans;
   ans=plusone(nums);
   for(int i=0;i<ans.size();i++){
     

      cout<<ans[i]<<endl;

   }


}