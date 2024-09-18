#include<iostream>
#include<cstring>
using namespace std;
class date{
    int month,day,year;
    string mon[13]={"","Jan","Feb","March","Apr","May","June",
                    "July","Aug","Sep","Oct","Nov","Dec"};
    public:
       date(const char *str);
       date(int d,int m,int y);
       void show();
};
date::date(const char *str){
    sscanf(str,"%d/%d/%d",&month,&day,&year);
}
date::date(int m,int d,int y){
    this->month=m;
    this->day=d;
    this->year=y;
};
void date::show(){
    cout<<day<<' '<<mon[month]<<", "<<year<<endl;
}

int main(){
    date sdate("12/31/2023");
    date idate(12,31,2024);
    idate.show();
    sdate.show();

    return 0;
}