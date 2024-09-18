#include<stdio.h>//2204044
typedef struct Student{
    char name[50];//2204044
    int age, total_marks;//2204044
}info;//2204044
info dataInput(){
    info s;//2204044
    printf("Enter name: ");//2204044
    gets(s.name);//2204044
    printf("Enter age and total marks: ");//2204044
    scanf("%d %d", &s.age, &s.total_marks);//2204044
    getchar();//2204044
    return s;//2204044
}
int dataOutput(info *s){
    printf("Name :%s\nAge :%d\nTotal marks:%d",
        s->name,s->age,s->total_marks);//2204044
}
int main(){
    info s[2];//2204044
    int total_marks=0;//2204044
    for(int i=0;i<2;i++){
        printf("Student :%d\n",i+1);//2204044
        s[i]=dataInput();//2204044
    }
    printf("Data Output :");
    for(int i=0;i<2;i++){
        printf("\nStudent :%d\n",i+1);//2204044
        dataOutput(&s[i]);//2204044
        total_marks+=s[i].total_marks;//2204044
    }
    double average = total_marks/2.0;//2204044
    printf("\nAverage :%.2f",average);//2204044
    return 0;
}
