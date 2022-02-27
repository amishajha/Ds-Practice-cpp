#include<iostream>
#include<set>
#include<unordered_map>
#include <algorithm>
#include<vector>
using namespace std;





set<string> kthDistinct(vector<string>& arr, int k) {
       unordered_map<string,int>m;
        for(int i = 0;i<arr.size();i++){
            m[arr[i]]++;
        }
        
        set<string>ans;
        
        for(auto i : m){
            if(i.second==1){
                ans.insert(i.first);
            }
        }
        
        // reverse(ans.begin(),ans.end());
        // if(ans.size()>=k){
        //     return ans[k-1];
        // }
        
        // else return "";

        return ans;
    
    }












    int main()
    {
    	vector<string>arr={"y","napli","jfqjc","mbl","oeush"};
    	// cout<<kthDistinct(arr);
    	// string ans;
    	set<string>ans;
    	ans=kthDistinct(arr,1);
    	for(auto i : ans){
    		cout<<i<<endl;
    	}

    	// cout<<ans.size();

    	// cout<<ans;
    }