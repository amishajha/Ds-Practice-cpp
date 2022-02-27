#include<iostream>
using namespace std;

int maximumsumpath(int arr[],int arr1[],int m,int n){

int sum1=0,sum2=0;
int i=0,j=0;
int result=0;

while(i<m and j<n){
    if(arr[i]<arr1[j]){

        sum1+=arr[i];
        i++;
    }

    else if(arr[i]>arr1[j]){
        sum2+=arr1[j];
    }

    else{

       result=max(sum1,sum2)+arr[i];

       sum1=0;
       sum2=0;

       i++;
       j++;



    }



}
while(i<m){
    sum1+=arr[i];
}
while(j<n){
    sum2+=arr1[j];
}

result+=max(sum1,sum2);
return result;

}








int main(){
int arr[]={    2, 3, 7, 10, 12, 15, 30, 34    };
int arr1[]={   1, 5, 7, 8, 10, 15, 16, 19     };

int m=sizeof(arr)/sizeof(arr[0]);
int n=sizeof(arr1)/sizeof(arr1[0]);


int ans=maximumsumpath(arr,arr1,m,n);

cout<<ans;



}
