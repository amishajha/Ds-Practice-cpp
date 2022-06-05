#include<iostream>
using namespace std;


 int findLucky(vector<int>& arr) {

               unordered_map<int,int>mp;
     for(int i = 0;i<arr.size();i++){
         mp[arr[i]]++;
     }
        
     vector<int>ans;
     for(auto i : mp){
         if(i.first==i.second){
             ans.push_back(i.first);

         }
     }


     sort(ans.begin(),ans.end());
     if(ans.size()>=1){
         return ans[ans.size()-1];
     }
        return -1;
 }












int main(){
   
   vector<int>arr={2,2,3,4};
   cout<<findLucky(arr)






}

// Given an array of integers arr, a lucky integer is an integer that has a frequency in the array equal to its value.

// Return the largest lucky integer in the array. If there is no lucky integer return -1.