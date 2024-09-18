#include<stdio.h>
int strSize(char *str);
int isSubstring(char *mainStr,char *subStr);
int main(){
    char mainStr[100],subStr[100];
    printf("Mainstring :");
    gets(mainStr);
    printf("Substring :");
    gets(subStr);
    if(isSubstring(mainStr,subStr))
        printf("Found\n");
    else
        printf("Not Found\n");
    return 0;
}
int isSubstring(char *mainStr,char *subStr){
    int m=strSize(mainStr);
    int n=strSize(subStr);
      for (int i = 0; i <= m - n; i++) {
        int j;
         for (j = 0; j < n; j++)
            if (mainStr[i + j] != subStr[j])
                break;
         if (j == n)
            return 1;
    }
    return 0;
}
int strSize(char *str){
    int size=0;
    while(str[size]!='\0') size++;
    return size;
}
