#include<iostream>
using namespace std;//2204044

class Employee{
    protected:
        string name;//2204044
        double salary;//2204044
    public:
        void set_e(string name,double salary){
            this->name=name;//2204044
            this->salary=salary;//2204044
        }
        void get_e(){
            cout<<"Name :"<<name<<endl<<
                "Salary :"<<salary<<endl;//2204044
        }
};//2204044
class Department{
    protected:
        string department_name;//2204044
    public:
        void set_d(string department_name){
            this->department_name=department_name;//2204044
        }
        void get_d(){
            cout<<"Department Name :"<<department_name<<endl;//2204044
        }
};//2204044
class Manager:public Employee,public Department{
    public:
            void set_m(string name,double salary,string department_name){
                this->name=name;//2204044
                this->salary=salary;//2204044
                this->department_name=department_name;//2204044
            }
            void get_m(){
                 cout<<"Name :"<<name<<endl<<
                    "Salary :"<<salary<<endl<<
                    "Department Name :"<<department_name<<endl;//2204044
            }

};//2204044

int main(){
    Manager obj;//2204044
    obj.set_m("ABC",46401,"Production");//2204044
    obj.get_m();//2204044
}
