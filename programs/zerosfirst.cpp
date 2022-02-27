#include<iostream>
#include<vector>
using namespace std;


int main(){
int arr[]={1,0,9,8,7,0};
int n= sizeof(arr)/sizeof(arr[0]);
vector<int>ans;
for(int i=0;i<n;i++){
    if(arr[i]==0){
        ans.push_back(arr[i]);
    }
}
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        ans.push_back(arr[i]);
    }
}


for(auto res:ans){
    cout<<res;
}

}










