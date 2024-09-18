#include<stdio.h>
int strSize(char *str);//2204044
int isSubstring(char *mainStr,char *subStr);//2204044
int main(){
    char mainStr[100],subStr[100];//2204044
    printf("Mainstring :");//2204044
    gets(mainStr);//2204044
    printf("Substring :");//2204044
    gets(subStr);//2204044
    if(isSubstring(mainStr,subStr))
        printf("Found\n");//2204044
    else
        printf("Not Found\n");//2204044
    return 0;//2204044
}
int isSubstring(char *mainStr,char *subStr){
    int m=strSize(mainStr);//2204044
    int n=strSize(subStr);//2204044
      for (int i = 0; i <= m - n; i++) {
        int j;//2204044
        for (j = 0; j < n; j++)
            if (mainStr[i + j] != subStr[j])
                break;//2204044
        if (j == n)
            return 1;//2204044
    }
    return 0;//2204044
}
int strSize(char *str){
    int size=0;//2204044
    while(str[size]!='\0') size++;//2204044
    return size;//2204044
}