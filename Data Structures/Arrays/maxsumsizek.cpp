#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//max sum of k consecutive elements in the array 

//u r given k find maxsum of k size


int maxsum (int arr[],int n ,int k){
    
    int max_sum = 0;

    for(int i = 0;i<k;i++)
        max_sum+=arr[i];


    int window_sum = max_sum;
    for(int i = k;i<n;i++){
        window_sum+= arr[i] - arr[i-k];
        max_sum = max(max_sum,window_sum);

    }


    return max_sum;



    

}