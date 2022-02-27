#include<iostream>
using namespace std;



int sumofdigits(int n)
{

           if(n==0)
           	return 0;
           return (n%10+sumofdigits(n/10));
           




}

int main(){


	int num=12345;
	int res=sumofdigits(num);

 cout<<res;









}

