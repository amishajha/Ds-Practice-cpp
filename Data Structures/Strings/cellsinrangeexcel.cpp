// Input: s = "K1:L2"
// Output: ["K1","K2","L1","L2"]
#include<iostream>
#include<vector>
using namespace std;

vector<string> cellsInRange(string s) {
	vector<string> ans;
        char a = s[0], b = s[3], x = s[1], y = s[4];
        for (; a <= b; ++a) {
            for (char i = x; i <= y; ++i) {
                ans.push_back(string(1, a) + string(1, i));
            }
        }
        return ans;
    }



int main(){


string s = "K1:L2";
vector<string>ans;
ans=cellsInRange(s);
for(int i = 0 ;i < ans.size() ;i++ ){
	cout<<ans[i];
}





}