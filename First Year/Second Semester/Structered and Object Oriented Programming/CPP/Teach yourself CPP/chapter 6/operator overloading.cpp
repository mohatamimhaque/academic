#include<iostream>
using namespace std;

class crood{
    int x,y;
    public:
        crood(int x=0,int y=0){
            this->x=x;
            this->y=y;
        }
        void display(){
            cout<<"X :"<<x<<" & Y:"<<y<<endl;
        }
        //overload binary operator
        crood operator+(const crood &obj){
            return crood(this->x+obj.x,this->y+obj.y);
        }
        crood operator-(const crood &obj){
            return crood(this->x-obj.x,this->y-obj.y);
        }
        crood operator*(const crood &obj){
            return crood(this->x*obj.x,this->y*obj.y);
        }
        crood operator/(const crood &obj){
            return crood(this->x/obj.x,this->y/obj.y);
        }
        crood operator%(const crood &obj){
            return crood(this->x%obj.x,this->y%obj.y);
        }

        //overload unary operator
        crood operator++(){
            return crood(++x,++y);
        }
        crood operator++(int){
            return crood(x++,y++);
        }

        crood operator--(){
            return crood(--x,--y);
        }
        crood operator--(int){
            return crood(x--,y--);
        }

        crood operator-(){
            x=-this->x;
            y=-this->y;
            return *this;
        }
        crood operator=(const crood &obj){
            x=obj.x;
            y=obj.y;
            return *this;
        }

        //overload logical operator
        int operator==(const crood &obj){
            return x==obj.x && y==obj.y;
        }
        bool operator!=(const crood &obj){
            return x!=obj.x && y!=obj.y;
        }

        bool operator>=(const crood &obj){
            return x>=obj.x && y>=obj.y;
        }
        bool operator<=(const crood &obj){
            return x<=obj.x && y<=obj.y;
        }

        bool operator>(const crood &obj){
            return x>obj.x && y>obj.y;
        }
        bool operator<(const crood &obj){
            return x<obj.x && y<obj.y;
        }

        //overload this->operator
        crood *operator->(){
            return this;
        }


};
int main(){
    crood obj1(10,12),obj2(-5,-9),obj;
    (obj=obj1).display();
}
