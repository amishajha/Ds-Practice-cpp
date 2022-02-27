#include<iostream>
using namespace std;
class Baseclass
{
public:
    int var;
    virtual void display()
    {
        cout<<"displaying";



    }



};

class Derivedclass:public Baseclass
{
public:
    int var;
    void display()
    {

        cout<<"displaying";
    }




};
int main()
{

    Baseclass * b;
    Derivedclass d;
    b=&d;
    b->display();
    return 0;

}
