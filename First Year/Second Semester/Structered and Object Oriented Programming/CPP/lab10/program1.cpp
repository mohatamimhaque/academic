#include<iostream>
using namespace std;//2204044

class shape{
    protected:
        double width,height;//2204044
    public:
        shape(double x,double y){
            width=x;//2204044
            height=y;//2204044
        }
        void get(){
            cout<<"Width :"<<width<<endl
                <<"Height :"<<height<<endl;//2204044
        }
};//2204044
class Rectangle:public shape{
    public:
        Rectangle(double x,double y):shape(x,y){};//2204044
        double area(){
            return width*height;//2204044
        }
};//2204044
int main(){
    Rectangle obj(5,10);//2204044
    cout<<"Area : "<<obj.area()<<endl;//2204044
}
