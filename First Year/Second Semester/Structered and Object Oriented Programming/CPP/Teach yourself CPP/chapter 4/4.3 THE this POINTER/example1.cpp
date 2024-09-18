// Demonstrate the this pointer .
#include<iostream>
#include<cstring>
using namespace std;
class invetory{
    string item;
    double cost;
    int on_hand;
    public:
        invetory(string i,double c,int o){
            this->item=i;
            this->cost=c;
            this->on_hand=o;
        }
        void show(){
            cout<<item<<' '<<"$"<<cost<<' '<<"on_hand:"<<on_hand<<endl;
        }
};
int main(){
    invetory obj("wrench", 4.95 , 4);
    obj.show();
}