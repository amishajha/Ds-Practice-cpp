//geeksforgeeks
//forgeeks
#include<iostream>
using namespace std;


   int koibhiname(string name,string name2){
   int n=name.length();
      int m=name2.length();

    
        if(m==0){
			return 0;
		}  int j=0;
      for(int i=0;i<n;i++){
      	if(name[i]==name2[j]){
      		j++;

      	}

      	else{
           
            i=i-j;
            j=0;


      	}

      	if(j==m){
      		return i-j+1;
      	}
      }



return -1;
   }







int main(){

   string name="geeksforgeeks";
   string name2="forgeeks";
   cout<<koibhiname(name,name2);



}