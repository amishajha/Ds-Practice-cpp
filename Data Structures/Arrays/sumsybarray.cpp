#include<iostream>
#include<vector>
using namespace std;

vector<int>sumarraysum(int arr[],int n,int s){
int i=0;
int j=0;
int sum=arr[0];
vector<int>ans;
while(sum!=s &&i<n &&j<n){
        if(sum<s){
            j=j+1;
            if(j>=n){
                break;

            }

            sum=sum+arr[j];
        }

    else if(sum>s){
        sum=sum-arr[i];
        i=i+1;

    }


}

if(sum!=s){
    ans.push_back(-1);
}
else{
    ans.push_back(i+1);
    ans.push_back(j+1);
}


return ans;


}


int main(){
int n,s;
cin>>n>>s;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];



}


vector<int>res=sumarraysum(arr,n,s);

for(int i=0;i<res.size();i++){
    cout<<res[i]<<endl;
}






}
