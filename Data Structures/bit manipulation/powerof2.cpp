#include<iostream>
using namespace std;





int main(){



   int n=16;
   //if we will do (and) operation on n,n-1 and if we get 0 then it is power of 2
   
   bool ans= (n & (n-1))==0;
   cout<<ans;








}