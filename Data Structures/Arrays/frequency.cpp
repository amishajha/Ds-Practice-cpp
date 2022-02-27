#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
int arr[]={3,2,2,1};
unordered_map<int ,int>mp;
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    mp[arr[i]]++;
}

for(auto i :mp){
    cout<<i.first<<endl;
    cout<<i.second<<endl;
}


}
