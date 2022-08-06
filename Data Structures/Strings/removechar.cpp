#include<iostream>
using namespace std;


string removechar (string string1,string string2){

      
       unordered_map<char,int>mp(string1.begin(),string1.end());
       string ans = "";
       

       for(auto &ch :string2){
        if(s.find(ch)!=s.end()){
            s.erase(ch);

        }
       }


       for(auto &ch :string1){

        if(s.find(ch)!=s.end()){
            ans =  ans + ch;

        }
            

             
       }


       return ans ;








}



int main(){

}