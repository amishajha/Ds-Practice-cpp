#include<iostream>
#include<algorithm>
using namespace std;
bool areAnagram(string a,string b){

int c=a.size();
int d=a.size();
if(d>c ||c>d){
    return false;
}

else{

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b){
        return true;
    }
    else{
        return false;

    }
}




}

int main(){


    string str1="test";
    string str2="teet";

    if(areAnagram(str1,str2))
{

    cout<<"strings are anagram";

}
else{


    cout<<" strings are not anagram";


}








}
