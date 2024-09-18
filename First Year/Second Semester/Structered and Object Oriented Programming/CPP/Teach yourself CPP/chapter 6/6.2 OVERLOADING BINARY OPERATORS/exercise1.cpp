
#include<iostream>
using namespace std;
class crood{
    int x,y;
    public:
        crood(){};
        crood(int x,int y){
            this->x=x;
            this->y=y;
        }
        void show(int &x,int &y){
            x=this->x;
            y=this->y;
        }
        crood operator*(const crood &obj);
        crood operator/(const crood &obj);
        crood operator%(const crood &obj);
        crood operator/(int x);
};
crood crood::operator*(const crood &obj){
    return crood(this->x*obj.x,this->y*obj.y);
}
crood crood::operator/(const crood &obj){
    return crood(this->x/obj.x,this->y/obj.y);
}
crood crood::operator%(const crood &obj){
    return crood(this->x%obj.x,this->y%obj.y);
}
crood crood::operator/(int x){
    this->x=this->x/x;
    this->y=this->y/y;
    return *this;
}
int main(){
    crood obj1(14,31),obj2(5,6),obj;
    int x,y;
    obj=obj1*obj2;
    obj.show(x,y);
    cout<<"(obj1*obj2) X: "<<x<<", (obj1*obj2) Y: "<<y<<endl;

/***/
    obj=obj1/obj2;
    obj.show(x,y);
    cout<<"(obj1/obj2) X: "<<x<<", (obj1/obj2) Y: "<<y<<endl;
/**
    int j=5;
    obj=obj1/5;
    obj.show(x,y);
    cout<<"(obj1/j) X: "<<x<<", (obj1/j) Y: "<<y<<endl;
/**/
    obj=obj1%obj2;
    obj.show(x,y);
    cout<<"(obj1%obj2) X: "<<x<<", (obj1%obj2) Y: "<<y<<endl;

}