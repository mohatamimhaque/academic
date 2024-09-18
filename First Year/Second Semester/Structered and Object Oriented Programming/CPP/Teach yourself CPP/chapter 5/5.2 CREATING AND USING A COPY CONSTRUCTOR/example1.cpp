#include<iostream>
#include<random>
using namespace std;
int generateRandomNumber(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(0,20);
    return distribution(gen);
}
class myClass{
    int *p;
    int size;
    public:
        myClass(int size);
        myClass(const myClass &a);
        ~myClass(){delete[] p;}
        int get_x(int i);
        void put_x(int i,int data);
};
myClass::myClass(int size){
    this->size=size;
    p=new int[size];
    cout<<"normal constructor && size :"<<size<<endl;
}
myClass::myClass(const myClass &a){
    this->size=a.size;
    p=new int[size];
    for(int i=0;i<size;i++){
        this->p[i]=a.p[i];
    }
    cout<<"copy constructor && size: "<<size<<endl;
}
void myClass::put_x(int i,int data){
    if(i>=0 && i<size){
        p[i]=data;
    }
}
int myClass::get_x(int i){
    return p[i];
}
int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(0,80);
    
    int size=distribution(gen);
    myClass nor(size);
    for(int i=0;i<size;i++){
        nor.put_x(i,distribution(gen));
    }
    myClass copy(nor);
    for(int i=0;i<size;i++){
        cout<<copy.get_x(i)<<endl;
    }
    return 0;
}

