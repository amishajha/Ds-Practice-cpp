#include<iostream>
#include<vector>
using namespace std;
//we have to perform xor operation to find the single number

int ans(vector<int>arr){



   int unique=0;
   for(int i :arr){
   	unique^=i;
   }


return unique;

}










int main(){

   
   vector<int>arr={1,2,2,1,3};
   

    cout<<ans(arr);





 



}