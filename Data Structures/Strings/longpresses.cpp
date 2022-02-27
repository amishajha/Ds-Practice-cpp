#include<iostream>
using namespace std;





bool longpress(string name1,string name2){

int i=0;
int j=0;
while(j<name2.size()){

   if(i<name1.size() and name1[i]==name2[j]){

     ++i;
     ++j;

   }


    



     else if(i>0 and name1[i-1]==name2[j])++j;
     else return false;


   


}



if(i==name1.size()){
	return true;
}
else{
	return false;
}
    
 






}








int main(){



string name1="alex";
string name2="aaleex";
cout<<longpress(name1,name2);



}