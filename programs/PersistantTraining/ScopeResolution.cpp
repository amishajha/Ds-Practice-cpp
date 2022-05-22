#include<iostream>
using namespace std;

class Human{
public:
string name = "";
void introduce();
   



};
void Human ::introduce(){
    cout<<Human::name<<endl;
}


int main(){

  Human ami;// create obj in stack memory
  ami.name="amisha";
  ami.introduce(); 


  Human *jha = new Human();//create obj in heap;
  jha->name="jha";
  jha->introduce();

  return 0;














}