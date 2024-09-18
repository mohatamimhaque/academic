/*The following program overloads the + operator relative to the coord class. This class
is used to maintain X, Y coordinates*/
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
        crood operator=(const crood &obj);
};
crood crood::operator+(const crood &obj){
    return crood(this->x+obj.x,this->y+obj.y);
}
crood crood::operator-(const crood &obj){
    return crood(this->x-obj.x,this->y-obj.y);
}
crood crood::operator=(const crood &obj){
    this->x=obj.x;
    this->y=obj.y;
    return *this;
}
int main(){
    crood obj1(10,10),obj2(5,3),obj;
    int x,y;
    obj=obj1+obj2;
    obj.show(x,y);
    cout<<"(obj1+obj2) X: "<<x<<", (obj1+obj2) Y: "<<y<<endl;

    obj=obj1-obj2;
    obj.show(x,y);
    cout<<"(obj1-obj2) X: "<<x<<", (obj1-obj2) Y: "<<y<<endl;

    obj=obj1;
    obj.show(x,y);
    cout<<"(obj=obj1) X: "<<x<<", (obj=obj1) Y: "<<y<<endl;
}