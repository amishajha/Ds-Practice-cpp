#include<iostream>
#include<unordered_map>
using namespace std;



 string greatestLetter(string s) {

        unordered_map<char,int>mp;
        for(int i = 0;i<s.size();i++){
            mp[s[i]]++;

        }
        sort(s.begin(),s.end());

        string ans = "";
        for(int i = 0;i<s.size();i++){
            char l  = tolower(s[i]);
            char u = toupper(s[i]);
            if(mp[l]&&mp[u]){
                ans = u;

            }


        }


  
return ans

   

        
    }


int main(){
     
     string s = "lEeTcOdE";
    cout<<greatestLetter(s);


}