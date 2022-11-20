
#include<iostream>
#include<algorithm>
using namespace std;

int func (int n ,int arr[]){
    sort(arr,arr+n);
    int prev = arr[0];
    int ans =  arr[0];

    for(int i = 1;i<n;i++){
        
        int cur = arr[i];
        if(prev>cur){
            cur = prev+1;

        }

        else if(cur==prev){
            cur++;
        }

        ans+=cur;
        prev = cur;
    }

    return ans;

}