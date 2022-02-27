#include<iostream>
using namespace std;
bool isSorted(int arr1[],int idx,int n){


    if(idx==n-1){
        return true;
    }

if(arr1[idx]<arr1[idx+1]){
    return isSorted(arr1,idx+1,n);
}

else{


    return false;
}



}



int main(){
int arr[]={1,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
cout<<isSorted(arr,0,n);




}

