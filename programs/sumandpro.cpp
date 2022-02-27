#include<iostream>
using namespace std;


 
    int sumofdigits(int n){
        
        int sum=0;
         while(n){
            
            sum+=n%10;
            n=n/10;
            
            
        }
        return sum;
        
        
        
        
    }
    
    
    
    int productofdigits(int n){
        
        int pro=1;
        
         while(n){
            pro*=n%10;
            n=n/10;
            
        }
        return pro;
        
        
    }
    int subtractProductAndSum(int n) {
        
        
    
        
     return   productofdigits(n)- sumofdigits(n);;
        
       
       
        
    }


int main(){

int n =234;
cout<<subtractProductAndSum(n);

}