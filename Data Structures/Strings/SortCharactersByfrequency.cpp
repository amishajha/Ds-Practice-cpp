#include<iostream>
#include<unordered_map>
using namespace std;

string frequencySort(string s){

      unordered_map<char,int>mp;
      string a = "";
      for(int i = 0;i<s.length();i++){
      	mp[s[i]]++;

      }
      priority_queue<pair<int,char>>pq;
      for(int j : mp){
      	pq.push_back({j.second,j.first});
      }
      
      while(!pq.empty()){

            for(int i = 0;i<pq.top().first;i++){
                 a+=pq.top().second;

            }
            
            pq.pop();




      }


return a;


}


int main(){

string s = "tree";
cout<<frequencySort(s);














}