#include<iostream>
using namespace std;



int maximumnum(int arr[],int n){
int maxi=0;
for(int i=0;i<n;i++){
    if(arr[i]>maxi){
        maxi=arr[i];
    }
}
return maxi;


}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){

 cin>>arr[i];



}

int s= maximumnum(arr,n);
cout<<s;


}
