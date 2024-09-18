#include<iostream>
using namespace std;
class myClass{
    int a,b;
    int num;
    public:
        void set(int a,int b){
            this->a=a;
            this->b=b;
        }
        int sum(){
            cout<<"From :"<<num<<endl;
            return a+b;
        }
        myClass(int num){
            cout<<"constructor obj"<<num<<endl;
            this->num=num;
        }
        ~myClass(){
            cout<<"Destructor obj"<<num<<endl;
        }
};

int main(){
    myClass obj1(1),obj2(2);
    obj1.set(5,6);
    obj2=obj1;
    cout<<obj2.sum()<<endl;
    cout<<obj1.sum()<<endl;
}
