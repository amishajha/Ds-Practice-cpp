#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;



 string kthLargestNumber(vector<string>& nums, int k) {
        
       vector<int>ans;
        
        for(int i = 0 ;i<nums.size();i++){
            
            ans.push_back(stoll(nums[i]));
            
        }
        
        sort(ans.begin(),ans.end(),greater<long long int >());

        string res= to_string(ans[k-1]);
        return  res;
       
    }









int main()



{
	vector<string>nums={"623986800","3","887298","695","794","6888794705","269409","59930972","723091307","726368","8028385786","378585"};
	cout<<kthLargestNumber(nums,11);

}