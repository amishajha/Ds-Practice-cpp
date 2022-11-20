#include<iostream>
using namespace std;

string renovatehouses(string str){
    int len = str.length();
    string ans;

    for(int i = 0;i<len;i++){
   char c = str[i];
   if(c=='a' || c=='e' ||c=='i'||c=='o'||c=='u' || c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
    continue;
   }

   ans+=c;
    }
 
return ans;   

}


int main(){
string s ="MynameisAnthony";
cout<<renovatehouses(s);

}