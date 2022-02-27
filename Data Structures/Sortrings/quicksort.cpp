#include<iostream>
using namespace std;

void swap(int *xp,int *yp){
int temp = *xp;
    *xp = *yp;
    *yp = temp;



}



int  Partition(int arr[],int l,int h){

int pivot=arr[l];
int i=l;
int j=h;
while(i<j){

    while(arr[i]<=pivot) i++;
    while(arr[j]>pivot)j--;
    if(i<j){
        swap(&arr[i],&arr[j]);
    }




}
swap(&arr[l],&arr[j]);
return j;




}



int printarray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}

}


void quickSort(int arr[],int l,int h){

if(l<h){


    int  pivot=Partition(arr,l,h);
    quickSort(arr,l,pivot-1);
    quickSort(arr,pivot+1,h);
}






}















int main(){
int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printarray(arr, n);
    return 0;





}
//best case onlogn

//worst case-O(n)*((n)
                   //space is O(n)
