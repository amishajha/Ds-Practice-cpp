#include<iostream>
using namespace std;

string keypad[]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void printkeypadOutput(string input,string output,int i=0){


	if(input[i]=='\0'){
		cout<<output<<endl;
		return;

	}


	int curr_digit=input[i]-'0';

	//rec case

	if(curr_digit==0 or curr_digit==1){
		printkeypadOutput(input,output,i+1);

	}

	//keypad
	for(int k=0;k<keypad[curr_digit].size();k++){
		printkeypadOutput(input,output+keypad[curr_digit][k],i+1);

	}

	return;
	




}


int main(){

	string input;
	cin>>input;
	string output;
	printkeypadOutput(input,output);
	return 0;


}