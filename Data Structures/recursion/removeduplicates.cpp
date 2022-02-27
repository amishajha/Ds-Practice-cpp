#include<iostream>
using namespace std;



void removeDuplicates(char* s)

{

         

          if(s[0]=='\0')

          	return;



          if(s[0]==s[1]){
         
          int i=0;
          while(s[i]!='\0'){
          
          s[i]=s[i+1];
          i++;




          }

removeDuplicates(s);         










          }



          removeDuplicates(S+1);
          

















}





int main(){

char s1[]="geeksforgeeks";

removeDuplicates(s1);

cout<<s1<<endl;


















}