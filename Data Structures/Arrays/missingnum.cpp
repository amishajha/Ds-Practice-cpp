#include<iostream>
using namespace std;


int findmissingno(int arr[],int n){

 int sum=0;
 
 sum=(n+1)*(n+2)/2;
  int total=0;

 for(int i=0;i<n;i++){

 	if(arr[i]==0){
 		sum=n*(n+1)/2;
 	}

 	total+=arr[i];


 }


 int ans;
 ans=sum-total;
 return ans;



}










int main(){

  int arr[]={3,0,1};
  int n=sizeof(arr)/sizeof(arr[0]);

  int ans;
  ans=findmissingno(arr,n);
  cout<<ans;






}