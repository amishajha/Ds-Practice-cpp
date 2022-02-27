#include<iostream>
using namespace std;


//referance variable
//same memory but different names

void update(int n){
	n++;

}




//we use stack then it is static memory allocation
//we use heap then it is dynamic 








int main(){
	//create a ref variable


// int i=4;
// int &j=i;

// cout<<i;



int n=5;
cout<<n;
update(n);//5
cout<<n;//5




}