#include<iostream>
#include<vector>
using namespace std;


vector<string>divideString( string s ,int k , char fill){
 int i=0;
        vector<string>ans;
        while(i<s.length()) {
            string tmp="";
            while(tmp.length()<k && i<s.length()) {
                tmp.push_back(s[i++]);
            }
            if(tmp.length()!=k) {
                while(tmp.length()<k) {
                    tmp.push_back(fill);
                }
            }
            ans.push_back(tmp);
        }
        return ans;
    }










int main()
{
	string s = "abcdefghi" ;
	int k = 3;
	char fill = 'x';
	vector<string>ans;
	ans = divideString(s,k,fill);
	for(int i = 0;i<ans.size();i++){
		cout<<ans[i];
	}
	return 0;
}