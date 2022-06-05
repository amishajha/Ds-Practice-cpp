#include<iostream>
using namespace std;


int partition(int arr[] , int s,int e){


int pivot = arr[s];
int count = 0;

for(int k = s+1 ;k <=e; k++ ){


  if(arr[k]<=pivot){

    count++;
  }

}

// swap with pivotindex
int pivotindex = s+count;
swap(arr[pivotindex],arr[s]);

// set smaller elements than pivot in left and larger in right


int i = s;
int j = e;
while ( i < pivotindex && j > pivotindex){

    while(arr[i]<=pivot){
        i++;
    }
                                                                                                                                    
    while(arr[j]>pivot){
        j--;
    }
    if(i<pivotindex && j > pivotindex){
        swap(arr[i++],arr[j--]);
    }




}


return pivotindex;

}
































void quickSort(int arr[] ,int s,int e){


if(s>=e){
    return;
}



int p = partition(arr,s,e);
quickSort(arr,s,p-1);
quickSort(arr,p+1,e);






















}















int main(){
    int n = 6;
int arr[6] = {10, 7, 8, 9, 1, 5};
  
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<< " ";
        
    }
    return 0;





}
//best case onlogn

//worst case-O(n)*((n)
                   //space is O(n)
