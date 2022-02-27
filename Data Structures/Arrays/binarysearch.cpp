#include<iostream>
using namespace std;


int  BinarySearch(int arr[],int l,int h,int k){
int mid;
mid=l+h/2;

while(l<h){

	if(arr[mid]==k){
		return mid;
	}


if(arr[mid]<k){
	l=mid+1;
	l++;
}
 else if(arr[mid]>k){

 	h=mid-1;
 	h--;
 } 



 else{

 BinarySearch(arr,l,h,k);
   

 }





}










}



int main(){


int n;
cin>>n;



int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}




int x;
cin>>x;
int l=0;
int h=n-1;

int  ans;
ans=BinarySearch(arr,0,n-1,x);


cout<<ans;







}





