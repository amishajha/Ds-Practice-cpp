#include<iostream>
using namespace std;



string sortsentence(string s){

 
   string word;
   vector<string>v(10);
   for(int i=0;i<s.size();i++){

    if(s[i]>=48 and s[i]<=57){
      v[s[i]-48]=word+ " ";
      word="";
      i++;

    }


    else word+=s[i];


   }


   string ans;
   for(string :ans){
    ans+=x;
   }

     ans.pop_back();
     return ans;

     




}



int main(){


  string s="is2 sentence4 This1 a3";
  string ans;
  ans=sortsentence(s);





}