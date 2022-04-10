#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

 vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
      
          int l=1;
           for(auto i : mp){
               if(i.second>1){
                   ans.push_back(i.first);
               }
               
               if(l>k){
                   break;
               }
               l++;
           }
           
           
           
           
           
       
        return ans;
        
    }



int main(){



	vector<int>ans ={1,1,1,2,2,3};
	vector<int>d;
	d = topKFrequent(ans,2);
	for(int i = 0;i<d.size();i++){
		cout<<d[i]<<endl;

	}





     

 

  





}