#include<iostream>
using namespace std;

int minmoves(int target,int  maxDoubles){

    
 int count = 0;
 while(target>1 && maxDoubles>0){

if(target%2==1){
target--;


}


else {

     target = target/2;
     maxDoubles--;




}

count++;
   





 }




count = target-1;
return  count;

}










int main(){
	int target = 5;
	int maxDoubles = 0;
	cout<<minmoves(target,maxDoubles);
}