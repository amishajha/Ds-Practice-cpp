#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

bool comp(const pair<int,int>&c1,const pair<int,int>&c2){
	if(c1.second != c2.second)
            return c1.second < c2.second;
        else
            return c1.first < c2.first;
}
vector<int>kweakestrow(vector<vector<int>>& mat, int k){


        vector<pair<int,int>>vec;
        vector<int>ans;
      
        for(int i = 0;i<mat.size();i++){
        	 int count = 0 ;
            for(int j = 0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
              
            }
              vec.push_back(make_pair(i,count));
               

        }

    

    sort(vec.begin(),vec.end(),comp);



    int count = 0;
    for(int i = 0;i<vec.size();i++){
    	if(count<k){
    		ans.push_back(vec[i].first);
    	}
    	count++;
    }
return ans;
}




int main(int argc, char const *argv[])
{
	vector<vector<int>>row={
		{1,1,0,0,0},
		{1,1,1,1,0},
		{1,0,0,0,0},
		{1,1,0,0,0},
		{1,1,1,1,1}
	};
	vector<int>ans;
	ans = kweakestrow(row,3);
	for(int i = 0;i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}