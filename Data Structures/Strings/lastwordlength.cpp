#include<iostream>
using namespace std;


int lastwordcount(string s){
            int count=0;


for(int i=s.length()-1; i>=0;i--){
                
      if(s[i]!=' ')
{
	count++;
}

else {

     if(s[i]==' ' and count>0){
     	return count;
     }




}





    }
      




   return count;  




}







int main(){


	string s="   fly me   to   the moon ";
cout<< lastwordcount(s);
	  

}