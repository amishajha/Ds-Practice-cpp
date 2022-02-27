#include<iostream>
using namespace std;

bool ispalindrome(string s ,int i ,int j){

	while(i<j){
		if(s[i]==s[j]){
			i++;
			j--;
		}

		else{

			return false;
		}



	}


	return true;
	
}


  bool validpalin(string s) {

    int n=s.size();

    int i=0;
    int j=n-1;

 
   while( i <j){

   if(s[i]==s[j]){
         
         i++;
         j--;

   }


else{


	return ispalindrome(s,i+1,j) or ispalindrome(s,i,j-1);


}
 

 


 


    }

        
       
        
        


        
    }





int main(){


string s="abca";
cout<<validpalin(s);


}