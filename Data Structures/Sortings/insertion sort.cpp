#include<iostream>
using namespace std;
insertionsort(int arr[],int n){

for(int i=1;i<n;i++){

 int j=i-1;
 int temp=arr[i];
 while(j>=0&&arr[j]>temp){
 arr[j+1]=arr[j];
    j--;


 }

 arr[j+1]=temp;



}









}

int printarray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}

}

int main(){

 int n;
cin>>n;
int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
}
insertionsort(arr,n);
cout<<"sorted arrays"<<endl;
printarray(arr,n);
return 0;


}








//time complexity is o(n*n)
//space o(1)
