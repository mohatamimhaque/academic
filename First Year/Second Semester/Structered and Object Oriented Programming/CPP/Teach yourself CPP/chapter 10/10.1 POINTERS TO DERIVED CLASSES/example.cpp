#include<iostream>
using namespace std;


class base{
    public:
        void parent(){
            cout<<"base"<<endl;
        }
};
class derive:public base{
    public:
        void child(){
            cout<<"derive"<<endl;
        }
};

int main(){
    base *p;
    derive obj;
    obj.child();
    obj.parent();

    p=&obj;
    p->parent();
}