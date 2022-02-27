#include<iostream>
using namespace std;




string converttobin(string a,string b){

   int i=a.size()-1;
   int j=b.size()-1;

   int carry=0;
   int sum=0;

   string ans;

   while(i>=0 or j>=0){


   	sum=carry;
   	if(i>=0) sum+=a[i]-'0';
   	if(j>=0) sum+=b[j]-'0';

   	ans+=to_string(sum%2);
   	carry = sum/2;
   	i--;
   	j--;



       



   }


   if(carry!=0) res+='1';
   reverse(ans.begin(),ans.end());
   return ans;


}








int main(){



string a="11";
string b="1";
  cout<< converttobin(a,b);







}