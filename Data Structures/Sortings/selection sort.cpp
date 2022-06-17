#include <iostream>
using namespace std;



void swap(int *xp,int *yp){
int temp = *xp;
    *xp = *yp;
    *yp = temp;

 

}

void selectionsort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int min_index=i;
    for(int j=i+1;j<n;j++)
    if(arr[j]<arr[min_index])
        min_index=j;



  swap(&arr[min_index],&arr[i]);




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
selectionsort(arr,n);
cout<<"sorted arrays"<<endl;
printarray(arr,n);
return 0;




}

//time complexity of selection sort is o(n*n)
