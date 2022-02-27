#include<iostream>
using namespace std;

void power(int n){
if(n==0){
    return;
}

cout<<n;

power(n-1);



}

int main(){
    int n;
cin>>n;
power(n);



}
