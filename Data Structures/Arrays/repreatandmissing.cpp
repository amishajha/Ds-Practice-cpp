#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int>repeatandmissing(int arr[],int n){

    unordered_map<int,int>mp;
    vector<int>ans;
    vector<int>newarr;

    int total;


for(int i=0;i<n;i++){
    mp[arr[i]]++;
}

for(auto i:mp){
    if(i.second>1){
        ans.push_back(i.first);
    }
    else{

       newarr.push_back(i.first);

    }




}
 newarr.push_back(ans[0]);
 int m= newarr.size();

 total=(m+1)*(m+2)/2;

for(int i=0;i<m;i++){

    total=total-newarr[i];

}
ans.push_back(total);





return ans;


}


int main(){



int arr[]={3,1,3};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>ans;

ans=repeatandmissing(arr,n);

for(int i=0;i<ans.size();i++){
    cout<<ans[i];
}











}
