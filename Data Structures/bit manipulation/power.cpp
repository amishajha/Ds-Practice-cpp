#include<iostream>
using namespace std;







int main(){

  int base=3;
  int power=6;

  int ans=1;


   while(power>0){



   	 if((power&1)==1){
      

       ans*=base;




   	 }


   	 base*=base;

   	 //right shift to move on next digit
   	power= power>>1;

 





  }



  cout<<ans;






}