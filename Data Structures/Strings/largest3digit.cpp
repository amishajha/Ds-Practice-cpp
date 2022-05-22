#include<iostream>
#include<string>

using namespace std;
 string largestGoodInteger(string num) {
        string ans = "";
        for(int i = 1;i<num.length()-1;i++){
            if(num[i-1]==num[i] && num[i]==num[i+1]){
                if(ans=="" && ans[0]<ans[i]){
                    ans=num.substr(i-1,3);
                }
            }
        }
   
 }












int main(){
    string num = "6777133339";
    largestGoodInteger(num);

}