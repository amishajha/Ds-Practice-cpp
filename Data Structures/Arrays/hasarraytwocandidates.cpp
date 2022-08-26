#include<iostream>
using namespace std;




bool hasarraytwocandidates(int arr[],int n ,int x){

    sort(arr,arr+n);
    int l = 0;
    int h = n-1;
    while(l<h){
        if(arr[l]+arr[h]==x){
            return true;
        }

        else if(arr[i]+arr[j]>x){
            h--;
        }
        else{
            l++;

        }
    }
     

  return false;




}