#include <iostream>
using namespace std;
class myClass{
    int a;
    public:
        int y;
        myClass(){
            a=0;
            cout<<"Default constructor"<<endl;
        }
        myClass(int a){
            this->a=a;
            cout<<"Parameterize constructor"<<endl;
        }
        myClass(myClass &obj){
            a=obj.a;
            y=8;
            cout<<"Copy Constructor"<<endl;
        }
};
int main(){
  myClass o(5);
  myClass obj=o;
  myClass obj2(o);
  cout<<obj.y;

return 0;}
