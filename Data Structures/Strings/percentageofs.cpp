#include<iostream>
using namespace std;

int percentageletter(string s,char letter){
    int count = 0;
    int n = s.length();
    for(int i = 0;i<s.length();i++){
        if(s[i]==letter){
            count++;
        }
    }
// int ans = count/6*100;
// return ans;
        return count*100/n;
}

int main(){

    string s = "foobar";
    char letter  = 'o';
    cout<<percentageletter(s,letter);

       
}