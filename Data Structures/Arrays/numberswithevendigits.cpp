#include<iostream>
#include<vector>
using namespace std;



int evennoofdigit(vector<int>&arr){



  int    count=0;
     int n;
     for(int i=0;i<arr.size();i++){

       n=arr[i];
       if((n>10 and n<=99) or(n>=1000 and n<=9999)or (n==100000)){

       	count++;
            


     }
       }






return count;

}









int main(){

     


     

      vector<int>arr={12,11,222,111};



      int ans;
      ans=evennoofdigit(arr);

      cout<<ans;






}