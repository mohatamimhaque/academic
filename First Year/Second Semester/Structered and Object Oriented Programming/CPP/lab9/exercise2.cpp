/*Write a friend function for adding the
two complex numbers, using a single class.*/
#include<iostream>
using namespace std;//2204039

class complex{
    int real,imaginary;//2204039
    public:
        complex(){};//2204039
        complex(int r,int i){
            real=r;//2204039
            imaginary=i;//2204039
        }
        friend void sum(const complex &o1,
                        const complex &o2);//2204039
};//2204039
void sum(const complex &o1,const complex &o2){
    int real = o1.real+o2.real;//2204039
    int imaginary = o1.imaginary+o2.imaginary;//2204039
    char op=imaginary<0?'-':'+';//2204039
    cout<<real<<op<<abs(imaginary)<<'i'<<endl;//2204039
}
int main(){
    complex obj1(20,10),obj2(5,-30);//2204039
    sum(obj1,obj2);//2204039

}
