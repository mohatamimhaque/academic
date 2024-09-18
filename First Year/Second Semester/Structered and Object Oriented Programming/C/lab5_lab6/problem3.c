#include <stdio.h>//2204044
int compare(char *str1,char *str2){
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i] != str2[i]){
            return 0;//2204044
        }
    }
    return 1;//2204044
}
int main(){
    char str1[100],str2[100];//2204044
    printf("Enter Two String :");//2204044
    gets(str1);//2204044
    gets(str2);//2204044
    printf("%d",compare(str1,str2));//2204044
    return 0;//2204044
}