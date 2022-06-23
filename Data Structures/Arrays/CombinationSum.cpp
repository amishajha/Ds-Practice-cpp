#include<iostream>
using namespace std;
 void fun (vector<int>c,vector<vector<int>>&ans,int t,int ind,vector<int>&v)
    {
        
        
        if(ind>c.size())return;
        if(t==0){
        
            ans.push_back(v);
            return;
            
        }
        if(t<0)return;
        for(int i = ind;i<c.size();i++){
            v.push_back(c[i]);
            fun(c,ans,t-c[i],i,v);
            v.pop_back();
            
        }
        
        
        
        
        
        
    }

 vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

      
        vector<vector<int>>ans;
        vector<int>v;
        fun(c,ans,t,0,v);
        return ans;
        
    }


int main(){

}