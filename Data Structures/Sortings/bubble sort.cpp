#include<iostream>>
using namespace std;



void swap(int *xp,int *yp){
int temp = *xp;
    *xp = *yp;
    *yp = temp;



}
void bubblesort(int arr[],int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
    }
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
bubblesort(arr,n);
cout<<"sorted arrays"<<endl;
printarray(arr,n);
return 0;


}

//worst case time complexity is o(n*n)
//best case is o(n) when the element is already sorted

