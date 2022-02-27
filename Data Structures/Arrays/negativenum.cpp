#include<iostream>
using namespace std;
void segelement(int arr[],int n){
int m=n;
int temp[m];
int j=0;
for(int i=0;i<n;i++){
    if(arr[i]>=0){
        temp[j]=arr[i];
        j++;
    }








}



for(int i=0;i<n;i++){


    if(arr[i]<0){
        temp[j]=arr[i];
        j++;
    }
}

j=0;
for(int i=0;i<n;i++){

    arr[i]=temp[j];
    j++;
}


}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

segelement(arr,n);

for(int i=0;i<n;i++){
cout<<arr[i]<<"";
}



}

