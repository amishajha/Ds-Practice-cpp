#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&inputStack,int count,int N){
	//base case

	if(count==N/2){
		inputStack.pop();
	return;
	}
  int num = inputStack.top();
  inputStack.pop();


	solve(inputStack,count+1,N);
	inputStack.push(num);

}

void deleteMiddle(stack<int>&inputStack,int N){
	int count = 0;
	solve(inputStack,count,N);
}


int main()
{

	stack<int>st;
	st.push(10);
	st.push(22);
	st.push(23);
	st.push(11);
	st.push(26);

	int n = st.size();

	deleteMiddle(st,n);
	while(!st.empty()){
		cout<<st.top();
	}
	
	return 0;
}