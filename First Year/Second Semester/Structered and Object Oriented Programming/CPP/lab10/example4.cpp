#include<iostream>
using namespace std;//2204044
class Animal{
    public:
        virtual string makeSound() = 0;//2204044
};//2204044
class Dog:public Animal{
    public:
        string makeSound(){
            return "Ghew Ghew...";//2204044
        }
};//2204044
class Cat:public Animal{
    public:
        string makeSound(){
            return "Meow Meow...";//2204044;//2204044
        }
};//2204044

int main(){
    Animal *p;//2204044
    Cat C;//2204044;
    Dog D;//2204044
    p=&C;//2204044
    cout<<"Cat's Sound :" <<p->makeSound()<<endl;//2204044
    p=&D; //2204044
    cout<<"Dog's Sound :"<< p->makeSound() <<endl;//2204044
}
