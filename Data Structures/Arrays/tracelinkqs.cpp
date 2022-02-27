#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


// int countfreq(vector<int>signalOne,vector<int>signaltwo){

// int n=signalOne.size();
// int m=signaltwo.size();

// // sort(signalOne.begin(),signalOne.end());
// // sort(signaltwo.begin(),signaltwo.end());

// int i=0,j=0;
// int count=0;
// int curr=0;

// while(i<n and j<m){

//    if(signalOne[i]==signaltwo[j] and signalOne[i]>curr){
//    	count++;
//    	curr=signaltwo[i];


   



//    }


//    i++;
//    j++;



// }


//    return count;



// }


// int getminval(vector<int>arr){

// 	auto sum = 0, min_sum = 0;
//     for (auto n : arr) {
//         sum += n;
//         min_sum = min(min_sum, sum);
//     }
//     return 1 - min_sum;

// }


int main(){

vector<int>ans={1,2};
int s;
s=getminval(ans);
cout<<s;





}