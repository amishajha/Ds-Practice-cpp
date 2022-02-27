#include<iostream>
#include<algorithm>

using namespace std;

// 
bool happynum(int n){

	 
        int sum=0;
	while(sum!=1){

		int sum=sum+pow(n%10,2);
		n=n/10;

	}

	if(sum==1){
		return true;
	}

	else {
		return false;

	}

}










int main(){

int n =19;
cout<<happynum(n);







}