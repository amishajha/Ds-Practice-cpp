#include<iostream>
using namespace std;

int ismagicnum(int n){
      int sum = 0;
      while(n>0 || sum>9){

        if(n==0){
            n=sum;
            sum=0;
        }
          sum+=n%10;
          n/=10;



      }

    

if (sum==1){
    return 1;
}
return 0;
      








}





int main(){
    int n;
    cin>>n;
    cout<<ismagicnum(n);
    return 0;

}