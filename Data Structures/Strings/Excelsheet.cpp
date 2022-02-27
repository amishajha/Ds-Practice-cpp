#include<iostream>
using namespace std;

string excelsheet(int n){
     

 string ans;


char temp;


     while(n){

        n=n-1;

        temp='A'+n%26;


        ans=temp+ans;

        n/=26;





     }

      return ans;





}

int main(){
            

int n;
cin>>n;

cout<<excelsheet(n);




       






}