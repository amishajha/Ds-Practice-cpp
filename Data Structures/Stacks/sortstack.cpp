#include<iostream>
#include<stack>

using namespace std;

void sortedinsert(stack<int>&s,int num){


if(s.empty()|| (!s.empty() && s.top()<num)){

 s.push(num);
 return;


}



int n = s.top();
s.pop();



sortedinsert(s,num);
s.push(n);











     





}


void sortstack(stack<int>&s){

if(s.empty()){


  return;
}


int num = s.top();
s.pop();

//recursivecall
sortstack(s);
sortedinsert(s,num);





     



}












int main(){


stack<int>p;
p.push(32);
p.push(11);
p.push(22);

sortstack(p);

while(!p.empty()){

cout<<p.top();
p.pop();

}




}