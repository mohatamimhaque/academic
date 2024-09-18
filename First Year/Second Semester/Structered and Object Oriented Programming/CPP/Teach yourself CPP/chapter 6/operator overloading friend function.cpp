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

        friend crood operator+(const crood &obj1,const crood &obj2);
        friend crood operator-(const crood &obj1,const crood &obj2);
        friend crood operator*(const crood &obj1,const crood &obj2);
        friend crood operator/(const crood &obj1,const crood &obj2);
        friend crood operator%(const crood &obj1,const crood &obj2);

        friend crood operator++(crood &obj);
        friend crood operator++(crood &obj,int);
        friend crood operator--(crood &obj);
        friend crood operator--(crood &obj,int);
        friend crood operator-(crood &obj);

        friend bool operator==(const crood &obj1,const crood &obj2);
        friend bool operator!=(const crood &obj1,const crood &obj2);
        friend bool operator>=(const crood &obj1,const crood &obj2);
        friend bool operator<=(const crood &obj1,const crood &obj2);
        friend bool operator>(const crood &obj1,const crood &obj2);
        friend bool operator<(const crood &obj1,const crood &obj2);

        friend istream &operator>>(istream &in,crood &obj);
        friend ostream &operator<<(ostream &out,crood &obj);




};
        //overload binary operator
        crood operator+(const crood &obj1,const crood &obj2){
            return crood(obj1.x+obj2.x,obj1.y+obj2.y);
        }
        crood operator-(const crood &obj1,const crood &obj2){
            return crood(obj1.x-obj2.x,obj1.y-obj2.y);
        }
        crood operator*(const crood &obj1,const crood &obj2){
            return crood(obj1.x*obj2.x,obj1.y*obj2.y);
        }
        crood operator/(const crood &obj1,const crood &obj2){
            return crood(obj1.x/obj2.x,obj1.y/obj2.y);
        }
        crood operator%(const crood &obj1,const crood &obj2){
            return crood(obj1.x%obj2.x,obj1.y%obj2.y);
        }


        //overload unary operator
        crood operator++(crood &obj){
            return crood(++obj.x,++obj.y);
        }
        crood operator++(crood &obj,int){
            return crood(obj.x++,obj.y++);
        }

        crood operator--(crood &obj){
            return crood(--obj.x,--obj.y);
        }
        crood operator--(crood &obj,int){
            return crood(obj.x--,obj.y--);
        }

        crood operator-(crood &obj){
            obj.x=-obj.x;
            obj.y=-obj.y;
            return obj;
        }

        //overload logical operator
        bool operator==(const crood &obj1,const crood &obj2){
            return obj1.x==obj2.x && obj1.y==obj2.y;
        }
         bool operator!=(const crood &obj1,const crood &obj2){
            return obj1.x!=obj2.x && obj1.y!=obj2.y;
        }

        bool operator>=(const crood &obj1,const crood &obj2){
            return obj1.x>=obj2.x && obj1.y>=obj2.y;
        }
         bool operator<=(const crood &obj1,const crood &obj2){
            return obj1.x<=obj2.x && obj1.y<=obj2.y;
        }

        bool operator>(const crood &obj1,const crood &obj2){
            return obj1.x>obj2.x && obj1.y>obj2.y;
        }
         bool operator<(const crood &obj1,const crood &obj2){
            return obj1.x<obj2.x && obj1.y<obj2.y;
        }


        //overload input output operator
        istream &operator>>(istream &in,crood &obj){
            cout<<"Input data :"<<endl;
            in>>obj.x;
            in>>obj.y;
            return in;
        }
        ostream &operator<<(ostream &out,crood &obj){
            out<<"Output data :"<<endl;
            out<<"X: "<<obj.x<<endl;
            out<<"Y: "<<obj.y<<endl;

            return out;
        }

int main(){
    crood obj1(10,12),obj2(-5,9),obj;
    cin>>obj;
    cout<<obj;
}
