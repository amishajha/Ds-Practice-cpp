#include <iostream>
using namespace std;

class animal {

public:
int age;
animal(){
    cout<<"animal";
}
void walk(){
    cout<<"animal walks"<<endl;
}



};
 class tiger: virtual public animal{
     public:
 tiger(){
    cout<<"tiger";
}


};
class Lion :virtual  public animal{

};
class liger :public tiger,public Lion{
public: 
liger(){
    cout<<"liger called";
}
}; 


int main(){
liger l;
l.walk();


// l.walk();//creates ambuiguity from where to call(tiger or lion)
}