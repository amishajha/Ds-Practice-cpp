// Given a range of Numbers, Find the Numbers with No DIGIT Repeated (Both Numbers Inclusive)

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;





vector<int>findnumrepeateddigit(vector<int>&v){

unordered_map<int,int>m;
vector<int>ans;

for(int i = 0;i<v.size();i++){
	while(v[i]){
      
      int j = v[i]%10;
      v[i]=v[i]/10;

      m[j]++;
 if(m[j]>0){
       	ans.push_back(v[i]);
       }


	}


	
}
return ans;
}










int main(){

 vector<int> v = { 121,23,41};
 vector<int>ans;
 ans = findnumrepeateddigit(v);
 for(int i = 0;i<ans.size();i++){
 	cout<<ans[i]<<endl;
 }


}