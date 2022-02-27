#include<iostream>
#include<vector>
using namespace std;



vector<int>printwave(vector<vector<int>> arr, int nRows, int mCols){


vector<int>ans;

for(int j=0;j<mCols;j++){
    

     if(j%2==0){


     	for(int i=0;i<nRows;i++){

          ans.push_back(arr[i][j]);


     	}
       

    

     }
     else{

     	//bottom to top


     	for(int i=nRows-1;i>=0;i--){


           ans.push_back(arr[i][j]);


     	}


     


     }




}


return ans;


}










int main(){

vector<vector<int>> v;
int n;
cin>>n;

int m;
cin>>m;



for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cin>>v[i][j];
	}
}



vector<int>ans;
ans=printwave(v,n,m);
for(int i=0;i<ans.size();i++){

	cout<<ans[i]<<" ";
}







}