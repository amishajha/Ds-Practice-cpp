#include<iostream>
#include <map>
#include <string.h>
using namespace std;
int main(){
char str[100]= "cpprogrammingcode";
int j,len;
map<char,int>m;
len=strlen(str);
for(int i=0;i<len;i++){
    m[str[i]]++;
}

for(j=0;j<len;j++){

       if (m[str[j]]==1){
          cout<<"First non-repeated character is "<<str[j];
          break;
       }


}





}
