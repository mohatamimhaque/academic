#include<iostream>
using namespace std;
class parent{
    public:
        int x=10;
        parent(){
            cout<<"parent class constructor\n";
        }
};
class child1:virtual public parent{
    public:
        child1(){
            cout<<"child1 class constructor\n";
        }
};
class child2:virtual public parent{
    public:
        child2(){
            cout<<"child2 class constructor\n";
        }
};
class grandchild:public child1,public child2{
    public:
        grandchild(){
            cout<<"grandchild class constructor\n";
        }
};
int main(){
    child1 child1;
    cout<<"trough child1 :"<<child1.x<<endl;
    child2 child2;
    cout<<"trough child2 :"<<child1.x<<endl;
    grandchild grandchild;
    cout<<"trough grandchild via child1 :"<<grandchild.child1::x<<endl;
    cout<<"trough grandchild via child2 :"<<grandchild.child2::x<<endl;
    cout<<"trough grandchild via child :"<<grandchild.x<<endl;

    return 0;
}