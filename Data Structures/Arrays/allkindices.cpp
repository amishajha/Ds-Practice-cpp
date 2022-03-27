#include<iostream>
using namespace std;

  vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
       vector<int>ans;
       set<int>s;
       int j = 0;
       for(int i = 0 ;i<nums.size();i++){
       	if(nums[i]==key){
       		for(int j = 0;j<nums.size();j++){
       			if(abs(i-j)<=k){
       				s.insert(j);
       			}
       		}
       	}

       	for(auto b:s){
       		ans.push_back(b);
       	}
       }
  return ans;


  }

int main(){


vector<int>nums={3,4,9,1,3,9,5};
int k = 2;
int key = 9;
vector<int>ans;
ans = findKDistantIndices(nums,key,k);
for(int i = 0;i<ans.size();i++){
	cout<<ans[i];

}








}