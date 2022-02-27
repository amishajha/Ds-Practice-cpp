#include<iostream>
#include<algorithm>
using namespace std;

void mergearray(int arr1[],int arr2[],int n,int m){
int i,k;

    //time complexity is 0(nlognn)+0(n)
//int k=0;
//
//int arr3[n+m];
//for(int i=0;i<n;i++){
//    arr3[k++]=arr1[i];
//}
//for(int j=0;j<m;j++){
//    arr3[k++]=arr2[j];
//
//}
//
//sort(arr3,arr3+n+m);
//k=0;
//for(int i=0;i<n;i++){
//    arr1[i]=arr3[k++];
//}
//
//
//for(int j=0;j<m;j++){
//arr2[j]=arr3[k++];
//}





for( i=0;i<n;i++){
    if(arr1[i]>arr2[0]){
        int temp=arr1[i];
        arr1[i]=arr2[0];
        arr2[0]=temp;
    }


    int first=arr2[0];
for( k=1;k<m &&arr2[k]<first;k++){
arr2[k-1]=arr2[k];
}
arr2[k-1]=first;

}


//swap the first element of the array






}










int main(){

     int arr1[] = {1,4,7,8,10};
  int arr2[] = {2,3,9};

    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr1[0]);

    cout<<"before sorting and mergeing"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr1[i]<<endl;
    }

    for(int j=0;j<m;j++){
        cout<<arr2[j]<<endl;
    }





    mergearray(arr1,arr2,n,m);

    cout<<"after merging"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr1[i];
    }

    for(int j=0;j<m;j++){
        cout<<arr2[j];
    }












}
