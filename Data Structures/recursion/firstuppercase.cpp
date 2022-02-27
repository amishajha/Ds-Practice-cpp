#include<iostream>
using namespace std;



char getuppercase(string s,int i=0){

string a;

if(s[i]=='\0'){
	return 0;
}

     


       if(isupper(s[i]))
       	    return s[i];
       

    return  getuppercase(s,i+1);

    







}

int main(){




string s="geekS";

int n=s.length();

cout<<getuppercase(s,0);






}