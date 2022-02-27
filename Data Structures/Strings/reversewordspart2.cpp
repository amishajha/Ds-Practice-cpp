#include<iostream>
using namespace std;

string reversewords(string s){

          
          int i=0;
          int n=s.length();
          string result;
          while(i<n){

           while(i<n and s[i]==' ')
           	i++;
            if(i>=n)break;



            int j=i+1;
            while(j<n and s[j]!= ' ')
            	j++;
            string w=s.substr(i,j-i);
            if(result.length()==0)
            	result=w;
            else {
                 
                 result=w+ " "+result;
                 i=j+1;




            }




            return result;
            












          }







}









int main(){


	string s;
	cin>>s;

	string b=reversewords(s);
	cout<<b;


    


    
	























}