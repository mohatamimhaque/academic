#include<iostream>
using namespace std;
class myClass{
    public:
        int a;
        myClass(int a){
            cout<<"Intialization"<<endl;
            this->a=a;
        }
        int show(){
            return a;
        }
        ~myClass(){
            cout<<"Destructor"<<endl;
        }
};
void outside(myClass *o){
    cout<<o->a<<endl;
}

int main(){
    myClass obj(5);
    cout<<obj.a<<endl;
    outside(obj);

    return 0;
}
