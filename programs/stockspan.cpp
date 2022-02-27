#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int>stockspan(vector<int>prices){
    vector<int>ans;
stack<pair<int,int>>s;
for(auto price:prices){
    int day=1;
    while(!s.empty() and s.top().first<price){
        day+=s.top().second;
        s.pop();



    }

    s.push({price,day});
    ans.push_back(day);




}
return ans;





}


int main(){
vector<int>v={100,80,60,70,60,75,85};
vector<int>res=stockspan(v);
for(auto i:res){
    cout<<i<<" ";


}



}
