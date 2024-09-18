// Create a two - dimensional array of objects .
#include<iostream>
using namespace std;
class samp{
    int a;
    public:
        samp(){
           a=0; 
        }
        samp(int a){
            this->a=a;
        }
        void show(){
            cout<<"Obj :"<<a<<endl;
        }
};
int main(){
    samp obj[5][2]={00,01,10,11,20,21,30,31,40,41};
    samp *p;
    p=&obj[0][0];
    for(int i=0;i<5*2;i++){
       p->show();
       p++;
    }
    p->show();
}