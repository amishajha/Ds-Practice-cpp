#include<iostream>
using namespace std;

unsigned int reverseno(unsigned int A){



     int sum =0;
    int cnt = 0;
    while( A > 0 ){
      if( A%2 == 1 ){
        int x = 31-cnt;
        sum += (1<<x);
      } 
      A/=2;
      cnt++;
    }

    return sum;





}









int main(){

     


unsigned int A= 00000000000000000000000000000011 ;

reverseno(A);









}