//mere hone na hone se kisiko ghanta fark nahi padta .



#include<iostream>
using namespace std;


// vector<int>twosum(vector<int> arr,int target){
//     vector<int>v;

//     map<int,int>mp;
//     for(int i=0;i<arr.size();i++){
//     	mp[arr[i]]=i;


//     }


//   for(int i=0;i<arr.size();i++){
//   	if(mp[(target)-nums[i]] and mp[(target)-nums[i]]!=i){

//          v.push_back(i);
//          v.push_back(mp[target-nums[i]]);


//   	}


//   }

//   return v;

// }







//}


// double findmediansortedarray(vector<int>&nums1,vector<int>&nums2){


// int l1=nums1.size();
// int l2=nums2.size();
// int *str= new int[l1+l2];
// int i=0,k=0;
// for( i=0;i<l1;i++){
// 	str[k++]=nums1[i];

// }
// for(i=0;i<l2;i++){
// 	str[k++]=nums2[i];
// }


// sort(str,str+(l1+l1));
// int m=l1+l2/2;
// if((l1+l2)%2==0){
// 	return (double)(str[m-1]+str[m])/2;
// }
// else{
// 	return (double)str[m];

// }








// }

// bool containsduplicate(vector<int>&nums,int k){

        

//         int i=0;
//         int j=nums.size()-1;
//         while(i<j){

//           if(nums[i]==nums[j] and abs(i-j)<=k){
//           	return true;
//           }

//           else{

//               if(nums[i]==nums[j] and abs(i-j)>k){
//               	j--;
//               }

//               if(nums[i]<nums[j]){
//               	i++;
//               }
//               else{
//               	j--;
//               }




//           }

          

//           return false;





//         }

   






// }


//summary ranges leetcode
Input: nums = [0,1,2,4,5,7]
Output: ["0->2","4->5","7"]
Explanation: The ranges are:
[0,2] --> "0->2"
[4,5] --> "4->5"
[7,7] --> "7"


vector<string>summaryRanges(vector<int>&nums){
vector<string>ans;

int j;

for(int i=0;i<n;i++){
	j=i+1;

       
       if(nums[i]==nums[j]+1){
       	j++;
          
       }


       ans.push_back(to_string(i));
       ans.push_back(to_string(j));
       


}

return ans;


}





int main(){

     int n;
     cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){

    	cin>>v[i];

    }
	int k=3;
	cout<<containsduplicate(v,3);








}