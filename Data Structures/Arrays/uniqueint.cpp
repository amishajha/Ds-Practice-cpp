#include<iostream>
#include<vector>
using namespace std;


vector<int>uniquenum(int n){


    vector<int>A(n);
    for(int i=0;i<n;i++)
    	A[i]=i*2-n+1;
    

  return A;


}







int main(){

   int n;
   cin>>n;

   vector<int> v;
v= uniquenum(n);
for(int i=0;i<v.size();i++){

   cout<<v[i]<<endl;


}








}