#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int  minSteps(string s, string t) {
      unordered_map<char,int>mp;
        int ans = 0;

       for(int i = 0;i<s.length();i++){
           
            mp[s[i]]++;

       }

       for(int i =0 ;i<t.length();i++){

       	mp[t[i]]--;
       }


       for(auto i : mp){
         ans+=abs(i.second);
       }


return ans;      
      



  }





int main(){

string s = "leetcode";
string t = "coats";
int ans=0;
 ans = minSteps(s,t);
 cout<<ans;

 }

     









