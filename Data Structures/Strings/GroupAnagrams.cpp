#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

 vector<vector<string>> groupAnagrams(vector<string>& strs) {

vector<vector<string>>ans;
unordered_map<string,int>m;

string sorted;
int i = 0;
for(string s :strs){
	sorted =  s;
	sort(sorted.begin(),sorted.end());
		if(m.count(sorted)<1){
			m[sorted]= i++;
			ans.push_back({s});
		}
		else ans[m[sorted]].push_back(s);
	
	}

	return ans;
}


        
 


int main(){


vector<string>str = {"eat","tea","tan","ate","nat","bat"};
vector<vector<string>>ans;
ans = groupAnagrams(str);
for(int i = 0;i<ans.size();i++){
	for(int j = 0;j < ans[0].size();j++){
        
        cout<<ans[i][j];


	}
}
     












}