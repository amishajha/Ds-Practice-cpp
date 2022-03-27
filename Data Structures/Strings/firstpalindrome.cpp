#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
string firstPalindrome(vector<string>& words) {
   
   for(int i = 0;i <words.size() ;i++){
      
      string s = words[i];
       reverse(words[i].begin(),words[i].end());
      if(s==words[i]){
      	return s;
      	break;
      }
      
   }     
    return "";



 }







int main(){

    vector<string>arr = {"abc","car","ada","racecar","cool"};
    cout<<firstPalindrome(arr);













}