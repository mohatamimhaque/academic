#include<iostream>
using namespace std;
class base{
    int x;
    public:
        void setx(int n){x=n;}
        void showx(){cout<<"Show from base class :"<<x<<endl;}
};
class derived:public base{
    int y;
    public:
        void sety(int n){y=n;}
        void showy(){cout<<"Show from derived class :"<<y<<endl;}
};
int main(){
    derived obj;
    obj.setx(24);
    obj.sety(20);
    obj.showx();
    obj.showy();
}
