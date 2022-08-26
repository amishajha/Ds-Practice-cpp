#include<iostream>
using namespace std;


long long ExtractNumber(string s ){

      
         
        long long sol = INT_MIN;
        string ans;
        
           
           for(int i = 0;i<s.size();i++){
               
               if(isdigit(s[i])){
                   ans = ans + s[i];
                   continue;
               }
               
               else if(s[i]==' ' && !ans.empty()){
                   
                   
                   for(int i = 0;i<ans.size();i++){
                       if(ans[i]=='9'){
                           ans="";
                           break;
                           
                       }
                   }
                   
                   if(!ans.empty()){
                       sol = max(sol,stoll(ans));
                       ans="";
                       
                   }
                   
                   
                   
                   
               }
               
               
           }
               
               
               
               
               for(int i = 0;i<ans.size();i++){
                   
                   if(ans[i] == '9'){
                       ans="";
                       break;
                   }
                       
                }
                
                if(!ans.empty()){
                    
                    sol = max(sol,stoll(ans));
                    ans="";
                    
                }
                   
                   
                   
               
               
           
           
        
        
        return sol==INT_MIN?-1:sol;









}