#include<iostream>
using namespace std;

int hammingdistance(int x ,int y){
	int res = x ^ y;
	int count = 0;
	while(res>0){
		count + = res&1;
		res=res>>1;
	}
	return count;
}



int main()
{

	int x = 3;
	int y  = 4;
	cout<<hammingdistance(x,y);
	
	return 0;
}