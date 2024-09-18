/*Overload the + for concatenating the two strings.
For e.g “Object” + “oriented” = Objectoriented*/
#include<iostream>
#include<string>
using namespace std;//2204039//2204039
class samp{
    string str;//2204039
    public:
        samp(){};//2204039
        samp(string str):str(str){};//2204039
        string show(){
            return str;//2204039
        }
        samp operator+(const samp &obj){
            return samp(str+obj.str);//2204039
        }
};//2204039
int main(){
    samp obj1("Object"),obj2("oriented"),obj;//2204039
    obj=obj1+obj2;//2204039
    cout<<obj.show()<<endl;//2204039
}
