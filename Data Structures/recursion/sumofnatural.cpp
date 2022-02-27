#include<iostream>
using namespace std;




int recurSum(int n){
      

      if(n<=1)
      	return n;

      return n+recurSum(n-1);



}

int main(){

   int n=5;
   cout<<recurSum(n);
   return 0;








}

 // if(n==0) return false;
 //        return ((n==1) || (n%2==0 && isPowerOfTwo(n/2)))