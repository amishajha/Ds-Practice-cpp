#include<iostream>
using namespace std;


int gcd(int a,int b){

   if(a==0){
   	return b;
   }

   if(b==0){
   	return a;
   }


   while(a!=b){

     if(a>b){
     	a=a-b;
     }

     if(b>a){
     	b=b-1;
     }
     





   }

   return a;


}
















int main(){
	int a;
	cin>>a;


	int b;
	cin>>b;


	int ans=gcd(a,b);
	cout<<ans;
}