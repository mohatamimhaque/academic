#include<stdio.h>//2204044
#include<string.h>//2204044
void countChar(int *digit, int *alpha, int *special, char *str) {
    for(int i = 0; str[i] != '\0'; i++) {
        int temp = str[i];//2204044
        if(temp >= 65 && temp <= 90 || temp >= 97 && temp <= 122) {
            (*alpha)++;//2204044
        } else if(temp >= 48 && temp <= 57) {
            (*digit)++;//2204044
        } else {
            (*special)++;//2204044
        }
    }
}
int main(){
    char str[80];//2204044
    printf("Enter String :");//2204044
    gets(str);//2204044
    int digit,alpha,special;//2204044
    digit=alpha=special=0;//2204044
    countChar(&digit,&alpha,&special,str);//2204044
    printf("Digit :%d\nAlphabet: %d\nSpecial Character:%d",digit,alpha,special);//2204044
    return 0;//2204044
}
