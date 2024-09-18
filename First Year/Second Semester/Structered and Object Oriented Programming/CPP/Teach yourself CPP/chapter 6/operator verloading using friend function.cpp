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
        void display(){
            cout<<"X :"<<x<<", Y :"<<y<<endl;
        }

        friend crood operator+(const crood &o1,const crood &o2);
        friend crood operator+(const crood &o1,int x);

        friend crood operator-(const crood &o1,const crood &o2);
        friend crood operator-(const crood &o1,int x);
        friend crood operator-(crood &o1);


        friend crood operator*(const crood &o1,const crood &o2);
        friend crood operator*(const crood &o1,int x);

        friend crood operator/(const crood &o1,const crood &o2);
        friend crood operator/(const crood &o1,int x);

        friend crood operator++(crood &o1);
        friend crood operator++(crood &o1,int);

        friend crood operator--(crood &o1);
        friend crood operator--(crood &o1,int);




};
    //overload binary +
    crood operator+(const crood &o1,const crood &o2){
        return crood(o1.x+o2.x,o1.y+o2.y);
    }
    crood operator+(const crood &o1,int x){
        return crood(o1.x+x,o1.y+x);
    }

    //overload binary -
    crood operator-(const crood &o1,const crood &o2){
        return crood(o1.x-o2.x,o1.y-o2.y);
    }
    crood operator-(const crood &o1,int x){
        return crood(o1.x-x,o1.y-x);
    }

    //overload binary *
    crood operator*(const crood &o1,const crood &o2){
        return crood(o1.x*o2.x,o1.y*o2.y);
    }
    crood operator*(const crood &o1,int x){
        return crood(o1.x*x,o1.y*x);
    }

    //overload binary /
    crood operator/(const crood &o1,const crood &o2){
        if(o2.x !=0 && o2.y != 0){
            return crood(o1.x/o2.x,o1.y/o2.y);
        }
    }
    crood operator/(const crood &o1,int x){
        if(x != 0){
            return crood(o1.x/x,o1.y/x);
        }
    }


    //overload prefix increment
    crood operator++(crood &o1){
        return crood(++o1.x,++o1.y);
    }
    //overload postfix increment
    crood operator++(crood &o1,int){
        return crood(o1.x++,o1.y++);
    }

    //overload prefix decrement
    crood operator--(crood &o1){
        return crood(--o1.x,--o1.y);
    }
    //overload postfix decrement
    crood operator--(crood &o1,int){
        return crood(o1.x--,o1.y--);
    }

    //overload unary -
    crood operator-(crood &o1){
        o1.x=-o1.x;
        o1.y=-o1.y;
        return o1;
    }

int main(){
    crood obj1(4,8),obj2(9,-0),obj;
    (-obj1).display();
    obj1.display();
}
