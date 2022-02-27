//peak element in the array

#include<iostream>
using namespace std;
int peakElement(int arr[],int n){
    if(n==1){
        return 0;
    }


    if(arr[0]>arr[1]){
        return 0;


    }


    if(arr[n-1]>arr[n-2]){
        return n-1;
    }

for(int i=1;i<n;i++){
        if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]){

            return i;

        }

}







}




int main(){
    int n=3;
int arr[n]={1,2,3,0};


int ans=peakElement(arr,n);
cout<<ans;



}
