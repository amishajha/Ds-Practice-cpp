#include<iostream>
using namespace std;


int hummingdistance(int x ,int y){



int count=0;
int n=x^y;
while(n){



count++;
n&=n-1;





}


return count;



}








int main(){


int x,int y;
cin>>x>>y;


cout<<hummingdistance(x,y);





















}