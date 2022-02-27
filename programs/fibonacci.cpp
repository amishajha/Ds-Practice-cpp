#include<iostream>
using namespace std;
int main(){
int n1=0;
int n2=1;
int n3,i,number;
cout<<"enter the total number"<<endl;
cin>>number;
cout<<n1<<" "<<n2<<" ";
for(i=2;i<number;++i){
    n3=n1+n2;
    cout<<n3;
    n1=n2;
    n2=n3;




}
return 0;
}











