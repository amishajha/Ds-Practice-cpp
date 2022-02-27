#include<iostream>
using namespace std;
// void cyclicsort(int arr[],int n){
// 1-N;


//  int i=0;
//  while(i<n){

//  	int correct=arr[i]-1;
//  	if(arr[i]!=arr[correct]){
//  		swap(arr[i],arr[correct]);
//  	}else{
//  		i++;
//  	}

//  }



// }

int main(){

   int arr[5]={3,5,2,1,4};
   int n=sizeof(arr)/sizeof(arr[0]);
   cyclicsort(arr,n);
   for(int i=0;i<n;i++){
   	cout<<arr[i];
   }




}