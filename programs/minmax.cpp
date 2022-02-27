//min max element in the array
#include<iostream>
using namespace std;

pair<int,int>getminmax(int arr[],int n){

    pair<int,int>p;
int maximum=arr[0];
int minimum=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>minimum){

       maximum=arr[i];


    }

}


p.first=maximum;

for(int i=0;i<n;i++){
    if(arr[i]<minimum){
        minimum=arr[i];


    }
}


p.second=minimum;
return p;

}







int main(){

int n=4;
int arr[n]={1,2,8,4};
pair<int,int>p=getminmax(arr,n);
cout<<p.first<<" "<<p.second;


}


