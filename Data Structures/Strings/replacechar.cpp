
#include<iostream>

using namespace std;


string replacechar(string ans){
int count = 0;
   for(int i = 0;i<ans.length();i++){
    if(ans[i]=='e'){
        count++;
        if(count==2 && ans[i]=='e'){
            ans[i]='@';
        }
    }
   }

   return ans;
}


int main(){
  
   string ans ="InterviewBit";
   cout<<replacechar(ans);



}