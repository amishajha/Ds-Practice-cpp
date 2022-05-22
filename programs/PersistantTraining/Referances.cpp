#include<iostream>
using namespace std;



int main(){
    int b = 3;
    int &ref = b;
    ref =5;
    // referance takes the referance of the variable so if we make any changes to one variable ,it get changes into other variable
    
    cout<<b<<endl;
}