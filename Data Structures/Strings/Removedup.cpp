#include<iostream>
using namespace std;

string remove(string s){
unordered_map<char,int>um;
string ans ="";
for(int i = 0;i<s,length();i++){
    um[s[i]]++;

}
for(auto i :um){
    if(i.second==1){
        ans.push_back(i.first);
    }
}
}


int main(){

string s = "geeksforgeek";
cout<<remove(s);





}
