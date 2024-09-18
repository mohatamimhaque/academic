#include<iostream>
using namespace std;//2204044//2204044
class Shape{
    public:
        virtual double calculateArea(){
        }
};//2204044//2204044
class Circle:public Shape{
    double radius;//2204044//2204044
    public:
        Circle(double radius):radius(radius){};//2204044//2204044
        double calculateArea(){
            return 3.1416*radius*radius;//2204044//2204044
        }
};//2204044//2204044
class Rectangle:public Shape{
    double width,height;//2204044//2204044
    public:
        Rectangle(double width,double height):width(width),
        height(height){};//2204044//2204044
        double calculateArea(){
            return width*height;//2204044//2204044
        }
};//2204044//2204044
class Square:public Shape{
    double length;//2204044//2204044
    public:
        Square(double length):length(length){};//2204044//2204044
        double calculateArea(){
            return length*length;//2204044//2204044
        }
};//2204044//2204044
class Triangle:public Shape{
    double width,height;//2204044//2204044
    public:
        Triangle(double width,double length):width(width),height(height){};//2204044//2204044
        double calculateArea(){
            return 0.5*width*height;//2204044//2204044
        }
};//2204044//2204044
int main(){
    Shape *p;//2204044//2204044
    Circle C(5);//2204044//2204044
    Rectangle R(5,12);//2204044//2204044
    Triangle T(5,12);//2204044//2204044
    Square S(5);//2204044//2204044

    p=&C;//2204044//2204044
    cout<<"Area of Circle :"<< p->calculateArea() <<endl;//2204044//2204044

    p=&R;//2204044//2204044
    cout<<"Area of Rectangle :"<<R.calculateArea() <<endl;//2204044//2204044

    p=&T;//2204044//2204044
    cout<<"Area of Triangle :"<< p->calculateArea() <<endl;//2204044//2204044

    p=&S;//2204044//2204044
    cout<<"Area of Square :"<< p->calculateArea() <<endl;//2204044//2204044


}
