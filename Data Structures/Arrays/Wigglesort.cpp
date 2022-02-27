// Input: nums = [1,5,1,1,6,4]
// Output: [1,6,1,5,1,4]
// Explanation: [1,4,1,5,1,6] is also accepted.




#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



void wigglesort(vector<int>&nums){


       vector <int> x(nums);
      sort(x.begin(), x.end());

       int i = x.size() - 1 ;
      int j = (x.size() - 1)/2;
      int n = nums.size();
      for(int l =0;l<n;l+=2){

      	nums[l]=x[j--];
      }


      for(int l=1 ;l<n;l+=2){


          nums[l]=x[i--];

      }








}


int main()
{
    
       int n =6;
       vector<int>m ={1,5,1,1,6,4};
       wigglesort(m);

       for(int i=0;i<m.size();i++){
       	cout<<m[i]<<" ";

       }

       cout<<endl;
     


}