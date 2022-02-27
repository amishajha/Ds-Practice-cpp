#include<iostream>
#include<stack>
using namespace std;

int main(){
stack<int>s;
s.push(2);
s.push(7);
s.push(11);
s.push(22);
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}






}
