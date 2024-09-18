#include<iostream>
#include<cstring>
using namespace std;
class samp{
    string name;
    string telephone;
    public:
        void set(string n,string t){
            this->name=n;
            this->telephone=t;
        }
        void show(){
            cout<<"Person name: "<<name<<endl;;
            cout<<"telephone Number: "<<telephone<<endl;
        }
};
int main(){
    samp *p;
    p=new samp;
    p->set("Mohatamim","01718611131");
    p->show();
    delete p;
}