#include<iostream>
using namespace std;


string dstring(string s){

string ans;
 int i=0;

    while(i<s.size()){

          
          if(i+2< s.size()  and s[i+2]=='#'){
            
             int val=int(s[i])-48;
             val=(val*10)+(int (s[i+1])-48);
             	ans.push_back(char(val+96));
             	i+=3;

             }


             else{

ans.push_back(char(int(s[i])-48+96));
                i++;

             }


}


return ans;

}





 for(int i=0;i<patterns.size();i++)
        {
            if(word.find(patterns[i])!=string::npos)
                count++;
        }
        return count;

          

        

    
    











int main(){


string s="10#11#12";
cout<<dstring(s);




}