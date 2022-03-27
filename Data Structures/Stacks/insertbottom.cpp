#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int>&s ,int x){

     

     if(s.empty()){
     	s.push(x);
     	return;
     }


     int num = s.top();
     s.pop();

     solve(s,x);
     s.push(num);




}




stack<int>insertbottom(stack<int>&s ,int x){


     
  solve(s,x);
  return s;



}












int main(){


stack<int>p;
p.push(11);
p.push(22);

p=insertbottom(p,3);

while(!p.empty()){

cout<<p.top();
p.pop();

}




}