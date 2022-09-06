//sum of a factorial of a given number



#include<iostream>
using namespace std;

// int fact(int n){
//     if(n<=1){
//         return n;
//     }

//     return n*fact(n-1);
// }

int sumoffact(int n ){
    int c  = 0;
    while(n>0){
        int last_digit = n%10;
        int fact = 1;
        for(int i = 1;i<=last_digit;i++){
            fact = fact*i;

        }
        c = c+fact;
        n/=10;

    }
 

return c;

}




int main(){

    int n ;
    cin>>n;

    cout<< sumoffact(n);







}