#include<iostream>
using namespace std;


int product(int a,int b){

	
              

      if(x<y)
      	return product(y,x);


      else if(y!=0)
      	return (x+product(x,y-1));



      else 
      	return 0;



}



int main(){



     int a,b;
     cin>>a>>b;

     int res=product(a,b);
     cout<<res;



}