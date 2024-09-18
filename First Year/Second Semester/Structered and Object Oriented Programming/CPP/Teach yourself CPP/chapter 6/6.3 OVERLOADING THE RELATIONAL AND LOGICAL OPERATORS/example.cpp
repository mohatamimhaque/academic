
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
        int operator==(const crood &obj);
        int operator==(int x);

        int operator!=(const crood &obj);
        int operator!=(int x);

        int operator>(const crood &obj);
        int operator>(int x);

        int operator<(const crood &obj);
        int operator<(int x);

        int operator>=(const crood &obj);
        int operator>=(int x);

        int operator<=(const crood &obj);
        int operator<=(int x);
};
int crood::operator==(const crood &obj){
    return obj.x == this->x && obj.y == this->y;
}
int crood::operator==(int x){
    return x == this->x && x == this->y;
}


int crood::operator!=(const crood &obj){
    return obj.x != this->x && obj.y != this->y;
}
int crood::operator!=(int x){
    return x != this->x && x != this->y;
}


int crood::operator>(const crood &obj){
    return obj.x > this->x && obj.y > this->y;
}
int crood::operator>(int x){
    return x > this->x && x > this->y;
}



int crood::operator>=(const crood &obj){
    return obj.x >= this->x && obj.y >= this->y;
}
int crood::operator>=(int x){
    return x >= this->x && x >= this->y;
}


int crood::operator<(const crood &obj){
    return obj.x < this->x && obj.y < this->y;
}
int crood::operator<(int x){
    return x < this->x && x < this->y;
}



int crood::operator<=(const crood &obj){
    return obj.x <= this->x && obj.y <= this->y;
}
int crood::operator<=(int x){
    return x <= this->x && x <= this->y;
}




int main(){
    crood obj1(11,10),obj2(5,6),obj;
    int x=10,y;
    if(obj1==obj2){
        cout<<"obj1 is equal to obj2 \n\n";
    }/*else if(obj1!=obj2){
        cout<<"obj1 is not equal to obj2 \n\n";
    }*/else if(obj1>obj2){
        cout<<"obj1 is greater than obj2 \n\n";
    }else if(obj1>=obj2){
        cout<<"obj1 is greater than or equal to obj2 \n\n";
    }else if(obj1<obj2){
        cout<<"obj1 is less than obj2 \n\n";
    }else if(obj1<=obj2){
        cout<<"obj1 is less than or equal to obj2 \n\n";
    }

    
    if(obj1==x){
        cout<<"obj1 is equal to x \n\n";
    }/*else if(obj1!=x){
        cout<<"obj1 is not equal to x \n\n";
    }*/else if(obj1>x){
        cout<<"obj1 is greater than x \n\n";
    }else if(obj1>=x){
        cout<<"obj1 is greater than or equal to x \n\n";
    }else if(obj1<x){
        cout<<"obj1 is less than x \n\n";
    }else if(obj1<=x){
        cout<<"obj1 is less than or equal to x \n\n";
    }



}