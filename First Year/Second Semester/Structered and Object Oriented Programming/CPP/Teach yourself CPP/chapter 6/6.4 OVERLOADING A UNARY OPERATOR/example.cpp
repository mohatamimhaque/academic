#include<iostream>
using namespace std;

class crood{
    int x,y;
    public:
        crood(int x,int y){
            this->x=x;
            this->y=y;
        }
        void show(int &x,int &y){
           x=this->x;
           y=this->y;
        }
        void show(){
           cout<<"X :"<<x<<", Y :"<<y<<endl;
        }
        crood operator-();

        crood operator++();//prefix
        crood operator++(int);//postfix

        crood operator--();//prefix
        crood operator--(int);//postfix
};
crood crood::operator-(){
    x = -this->x;
    y = -this->y;
    return *this;
}

crood crood::operator++(int){
    this->x++;
    this->y++;
    return *this;
}

crood crood::operator++(){
    this->x++;
    this->y++;
    return *this;
}

crood crood::operator--(){
    this->x--;
    this->y--;
    return *this;
}

crood crood::operator--(int){
    this->x--;
    this->y--;
    return *this;
}
int main(){
    crood obj(5,6);

    obj++;
    obj.show();

    -obj;
    obj.show();
    
    obj++;
    obj.show();
}