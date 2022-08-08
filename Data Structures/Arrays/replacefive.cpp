#include<iostream>
using namespace std;


int countfive(int n){

    int digit = 0 ;

    vector<int>v;

    while(n>0){
        digit = n%10;

        if(digit==0)

        v.push_back(5);

        else 

        v.push_back(digit);
        

        n = n/10;


    }

    int r  = 0;
    for(int i = v.size()-1;i>=0;i--){
        r = r*10 + v[i];

    }


    return r;

}

int main(){

}