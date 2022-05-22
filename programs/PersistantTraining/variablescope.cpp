#include<iostream>
using namespace std;
void display();

//declare a variable inside the function then it is called local scope
//declare a variable outside the function then it is called global scope
int x  = 24; //global 
int main(){

display();


}

void display(){
    int a ,b;//local 
    a=11;
    b=22;
    cout<<a<<b;
}