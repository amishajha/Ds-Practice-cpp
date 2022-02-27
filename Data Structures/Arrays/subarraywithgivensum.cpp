#include<iostream>
#include<vector>
using namespace std;

vector<int>sunarraywithsum(int arr[],int n,int sum){
int i=0,j=0;
int s=arr[0];
vector<int>ans;
while(s!=sum&&i<n&&j<n){
    if(s<sum){
      j++;
      if(j>n)break;

    s+=arr[j];


    }
    else if(s >sum){
        s=s-arr[i];
        i++;



    }

}

   if(s!=sum){
    ans.push_back(-1);
   }

   ans.push_back(i+1);
   ans.push_back(j+1);
return ans;

}














int main(){


int arr[]={1,2,3,7,5};
int n= sizeof(arr)/sizeof(arr[0]);
int sum=12;
vector<int>res;
res=sunarraywithsum(arr,n,sum);
int m= sizeof(res)/sizeof(res[0]);
for(int i=0;i<m-1;i++){
    cout<<res[i]<<endl;


}





}
