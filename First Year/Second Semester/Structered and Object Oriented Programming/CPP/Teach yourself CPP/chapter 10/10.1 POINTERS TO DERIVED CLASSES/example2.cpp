#include<iostream>
using namespace std;

class base{
    int x;
    public:
        void setX(int x){
            this->x=x;
        }
        void getX(){
            cout<<"X :"<<x<<endl;
        }
};
class derive:public base{
    int y;
    public:
        void setY(int y){
            this->y=y;
        }
        void getY(){
            cout<<"y :"<<y<<endl;
        }

        derive *operator->(){
            return this;
        }
};

int main(){
    base X;
    X.setX(10);
    X.getX();

    cout<<endl;
    derive Y;
    Y.setY(20);
    Y.getY();
    cout<<endl;
    Y->setX(35);
    Y.getX();

    cout<<endl;
    base*p;
    p=&Y;
    p->setX(28);
    p->getX();
}