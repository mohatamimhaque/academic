/*It is possible to overload an operator relative to a class so that the operand on the right
side is an object of a built-in type, such as an integer, instead of the class for which the
operator function is a member. For example, here the + operator is overloaded to add an
integer value to a coord object:*/
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
        crood operator+(const crood &obj);
        crood operator-(const crood &obj);
        crood operator-(int x);
        crood operator=(const crood &obj);
};
crood crood::operator+(const crood &obj){
    return crood(this->x+obj.x,this->y+obj.y);
}
crood crood::operator-(const crood &obj){
    return crood(this->x-obj.x,this->y-obj.y);
}
crood crood::operator-(int x){
    return crood(this->x-x,this->y-x);
}
crood crood::operator=(const crood &obj){
    this->x=obj.x;
    this->y=obj.y;
    return *this;
}
int main(){
    crood obj1(10,8),obj2(5,3),obj;
    int x,y;
    obj=obj1+obj2;
    obj.show(x,y);
    cout<<"(obj1+obj2) X: "<<x<<", (obj1+obj2) Y: "<<y<<endl;

    obj=obj1-obj2;
    obj.show(x,y);
    cout<<"(obj1-obj2) X: "<<x<<", (obj1-obj2) Y: "<<y<<endl;
    
    int j=45;
    obj=obj1 - j;
    obj.show(x,y);
    cout<<"(obj1-j) X: "<<x<<", (obj1-j) Y: "<<y<<endl;

    obj=obj1;
    obj.show(x,y);
    cout<<"(obj=obj1) X: "<<x<<", (obj=obj1) Y: "<<y<<endl;
}