#include<iostream>
#include<cstring>
using namespace std;
int main(){
    float *f;
    long *i;
    char *ch;

    f=new float;
    i=new long;
    ch=new char[20];

    *f=25.50;
    *i=1200058;
    strcpy(ch,"this is string");

    cout<<"float:"<<*f<<" long :"<<*i<<' ';
    printf("char:%s",ch);


    return 0;
}