#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int>twosum(vector<int>&ans,int target){

vector<int>myans;
int n=sizeof(ans)/sizeof(ans[0]);
unordered_map<int ,int>mpp;
for(int i=0;i<n;i++){
    if(mpp.find(target-ans[i])!=mpp.end()){
        myans.push_back(mpp[target-ans[i]]);
        myans.push_back(i);
        return myans ;
    }

    mpp[ans[i]]=i;
}
return myans;



}



int main(){
vector<int>arr;
arr.push_back(2);
arr.push_back(7);
arr.push_back(11);
arr.push_back(15);
int target=9;
vector<int>res=twosum(arr,target);
int n=sizeof(res)/sizeof(res[0]);
for(int i=0;i<n-1;i++){
    cout<<res[i]<<endl;
}


}
