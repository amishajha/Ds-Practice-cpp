#include<iostream>
using namespace std;

void display(int a,int b,int c = 44){
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

}


// default function allows us to send the display function without third argument
//start from last variable

int main(){
    
    int a = 3;
    int b = 2;
    display(a,b);





}