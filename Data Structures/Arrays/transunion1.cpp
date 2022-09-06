#include<iostream>
#include<vector>
using namespace std;


int countnonvowel(vector<char>str,int n){
    int nv = 0;
    for(int i = 0;i<n;i++){
        str[i] = tolower(str[i]);
        if(str[i]=='a' ||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u'){
            continue;
        }
        else {
            nv++;

        }
    }
  return nv;

}



int main(){
   
    vector<char>str;
    str.push_back('a');
    str.push_back('d');
    str.push_back('f');
    str.push_back('s');
 
    int n = str.size();
    cout<<countnonvowel(str,n);





}