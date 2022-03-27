

#include<iostream>
#include<vector>
#include<unordered_set>
   
using namespace std;




vector<vector<int>>finddiff(vector<int>&A,vector<int>&B){

     
     unordered_set<int>sa(begin(A),end(A)),sb(begin(B),end(B));
     vector<vector<int>>ans(2);
     for(int n :sa){
     	if(sb.count(n)==0){
     		ans[0].push_back(n);
     	}
     }

     for(int n:sb){
     	if(sa.count(n)==0){
     		ans[1].push_back(n);
     	}
     }

return ans;
}







int main(int argc, char const *argv[])
{

    vector<int>num1={1,2,3,4};
    vector<int>num2={1,1,2,5};
    vector<vector<int>>ans;
  ans =finddiff(num1,num2);
    for(int i = 0 ;i<ans.size();i++){
    	for(int j = 0;j<ans[i].size();j++){
    		cout<<ans[i][j]<<endl;

    	}
    }
	
	return 0;
}