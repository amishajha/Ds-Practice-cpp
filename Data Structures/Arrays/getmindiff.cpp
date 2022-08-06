#include<iostream>
using namespace std;

int getmindiff(int arr[],int n ,int k){
        
       sort(arr,arr+n);
       int tmpmin = arr[0],tmpmax = arr[n-1];
       int ans = tmpmax-tmpmin;

       for(int i = 0;i<n;i++){
        if(arr[i]<k)
        continue;

        tmpmin = min(arr[i]-k,arr[0]+k);
        tmpmax = max(arr[i-1]+k,arr[n-1]-k);
        ans = min(ans,tmpmax-tmpmin);

       } 

       return ans;

       






}



int main(){

}