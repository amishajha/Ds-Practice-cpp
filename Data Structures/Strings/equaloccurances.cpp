#include<iostream>
#include<unordered_map>
using namespace std;



bool areOccurancesEqual(string s){
    
     unordered_map<char,int>mp;
     for(int i = 0;i<s.size();i++){
         mp[s[i]]++;
     }

  int x= mp[s[0]];
        
        for(auto i :mp){
            if(i.second!=x)return 0;
            
            
        }

return true;



}



int main(){

 string s = "abacbc";
 areOccurrencesEqual(s);



}