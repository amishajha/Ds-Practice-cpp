#include<iostream>
using namespace std;

   int  halvesAreAlike(string s) {
   	    int count1=0;
   	    int count2=0;

        int n=s.size();

     
        
        
        int mid=n/2;
        
        for(int i=0;i<mid;i++){
          
            
            if(tolower(s[i])=='a'||  tolower(s[i])=='e' || tolower(s[i])=='o'||tolower(s[i])=='i' ||tolower(s[i])=='u'){
               
               count1++;
               }
    
             
        
        }



       for(int i=mid;i<n;i++){
           
              if(tolower(s[i])=='a'||  tolower(s[i])=='e' || tolower(s[i])=='o'||tolower(s[i])=='i' ||tolower(s[i])=='u'){
               
               count2++;
               }
           
       }
       

        
 
        
         
  return count1==count2;
        
}

      




        
    

int main(){
   
     string s="textbook";
   
     cout<<halvesAreAlike(s);






}