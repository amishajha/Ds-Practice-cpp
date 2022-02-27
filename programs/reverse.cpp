#include<iostream>
using namespace std;
string reverseword(string s,int n){
for(int i=n-1;i>=0;i--){
    cout<<s[i];
}
}




int main(){

string s="geeks";
int n=s.size();
reverseword(s,n)



}
