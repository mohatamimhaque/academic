#include<iostream>
using namespace std;
class myClass{
    int x;
    public:
        myClass(){
            x=0;
        }
        myClass(int x){
            this->x=x;
        }
        int show(){
            return x;
        }
};
int main(){
    myClass obj(8);
    myClass obj_array[10]={5,2,3,4,2,55,8,1,5};
    cout<<obj.show()<<endl;
    for(int i=0;i<10;i++){
        cout<<"Obj No "<<i+1<<":"<<obj_array[i].show()<<endl;
    }

}