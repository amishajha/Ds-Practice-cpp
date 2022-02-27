#include<iostream>
using namespace std;


//tc-onlogn
//space o(1);


int noofplatform(int a[],int d[],int n){


sort(a,a+n);
sort(d,d+n);
int count=1;
int  ans=1;

int i=1,j=0;
while(i<n and j<n){


          if(a[i]<=d[j]){

          	count++;
          	i++;
          }

          else{


            count--;
            j++;



          }





   ans=max(ans,count);





  



}


return ans;




}








int main(){

       int n=2;


        //arriving array
	  int arr[n]={10,12};
	  int dept[n]={11,13};



	  cout<<noofplatform(arr,dept,n);






   



}