#include<iostream>
using namespace std;


void printTriangle(int A[],int n){

          if(n<1)
          	return ;



         int temp[n-1];
         for(int i=0;i<n-1;i++){

         	int x=A[i]+A[i+1];
         	temp[i]=x;
         }

            

        printTriangle(temp,n-1);


        for(int i=0;i<n;i++){



          if(i==n-1)
          	cout<<A[i]<<" ";
          else
          	cout<<A[i]<<" ,";


}




cout<<endl;
















}











int main(){

int arr[]={1,2,3,4};
int n=sizeof(arr)/sizeof(arr[0]);

printTriangle(arr,n);






}