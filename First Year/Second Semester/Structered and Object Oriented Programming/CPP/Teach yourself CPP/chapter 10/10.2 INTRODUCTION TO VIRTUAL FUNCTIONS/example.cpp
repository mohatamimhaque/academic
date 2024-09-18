#include<iostream>
using namespace std;
class base{
    protected :
        int i;
    public:
        base(int x):i(x){};
        virtual void func(){
            cout<<"Using base :"<<i*i<<endl;
        }

};
class derive1:public base{
    public:
        derive1(int x):base(x){};
        void func(){
            cout<<"Using derive 1:"<<i*i<<endl;
        }
};


class derive2:public base{
    public:
        derive2(int x):base(x){};
        /*void func(){
          //  cout<<"Using derive 2:"<<i*i<<endl;
        }*/
};


int main(){
    base *p;
    base obj(15);
    derive1 obj1(10);
    derive2 obj2(12);

    p=&obj;
    p->func();
    cout<<endl;

    p=&obj1;
    p->func();

    cout<<endl;
    p=&obj2;
    p->func();

    return 0;
}