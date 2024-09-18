#include<stdio.h>//2204044
int main(){
    int n,num,i;
    char first[10],last[10];
    printf("Enter how many number want to print it out in words :");//2204044
    scanf("%d",&n);//2204044
    i = 0;
    while (i < n) {
        printf("Enter an integer [20-99]: ");//2204044
        scanf("%d", &num);//2204044
        if (num >= 20 && num <= 99) {
            switch (num / 10) {
            case 2:
                strcpy(first, "Twenty");//2204044
                break;
            case 3:
                strcpy(first, "Thirty");//2204044
                break;
            case 4:
                strcpy(first, "Forty");//2204044
                break;
            case 5:
                strcpy(first, "Fifty");//2204044
                break;
            case 6:
                strcpy(first, "Sixty");//2204044
                break;
            case 7:
                strcpy(first, "Seventy");//2204044
                break;
            case 8:
                strcpy(first, "Eighty");//2204044
                break;
            case 9:
                strcpy(first, "Ninety");//2204044
                break;
            }
            switch (num % 10) {
            case 0:
                strcpy(last, "");//2204044
                break;
            case 1:
                strcpy(last, "One");//2204044
                break;
            case 2:
                strcpy(last, "Two");//2204044
                break;
            case 3:
                strcpy(last, "Three");//2204044
                break;
            case 4:
                strcpy(last, "Four");//2204044
                break;
            case 5:
                strcpy(last, "Five");//2204044
                break;
            case 6:
                strcpy(last, "Six");//2204044
                break;
            case 7:
                strcpy(last, "Seven");//2204044
                break;
            case 8:
                strcpy(last, "Eight");//2204044
                break;
            case 9:
                strcpy(last, "Nine");//2204044
                break;
            }
            printf("%s %s\n", first, last);//2204044
        }
        i++;
    }
    return 0;
}
