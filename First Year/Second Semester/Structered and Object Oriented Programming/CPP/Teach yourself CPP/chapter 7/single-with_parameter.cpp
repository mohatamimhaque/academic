#include<iostream>
using namespace std;
class base{
    public:
        base(){
            cout<<"base class default constructor\n";
        }
        base(int x){
            cout<<"base class constructor with parameter\n"<<x<<endl;
        }
        ~base(){
            cout<<"base class destructor\n";
        }
};
class derived:public base{
    public:
        derived(){
            cout<<"derived class default constructor\n";
        }
        derived(int x):base(x){
            cout<<"derived class constructor with one parametr\n"<<x<<endl;
        }
        derived(int x,int y):base(x){
            cout<<"derived class constructor with two parametr\n"<<y<<endl;
        }
        ~derived(){
            cout<<"derived calss destructor\n";
        }
};
int main(){
    derived obj(8);
    return 0;
}