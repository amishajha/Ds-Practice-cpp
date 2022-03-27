#include<iostream>
#include<unordered_map>
using namespace std;










bool winnerOfGame(string colors) {
       int countA = 0;
        int countB=0;
	
        for(int i = 1 ;i<colors.length();i++){
            if(colors[i-1]=='A' && colors[i]=='A' && colors[i+1]=='A'){
               countA++;
            }
            
            if(colors[i-1]=='B' && colors[i]=='B'&& colors[i+1]=='B'){
                countB++;
            }
        }
       
       if(countA>countB){
           return true;
       }
        
        else {
            
            return false;
        }
     





}

    int main(){



          string s = "AAABABB";
          cout<<winnerOfGame(s);





    }