#include<iostream>
using namespace std;






int countdigitsum(int n){

	int sum=0;
	
     while(n){

         sum+=n%10;
        n=n/10;



         }
     
   


   return sum;  







}



  int countEven(int num) {
        int sum = 0;
        int res=num;
        int i=2;
        int count = 0;
       if(num<10 ){
           count=num/2;
           
       }
        else {
            
            int sum =  countdigitsum(num);
            if(sum%2==0 || num%2!=0){
                count = num/2;
            }
            else {
                count=num/2-1;
                
            }
       
       
            
            
            
            
            
        }
      
       return count; 

       }



 int main()
{

	int n = 33;
	cout<<countdigitsum(n);
	
	return 0;
}