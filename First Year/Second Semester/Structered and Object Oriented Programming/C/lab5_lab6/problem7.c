#include <stdio.h>//2204044
int main() {
    int rows, cols;//2204044
    printf("Enter the number of rows: ");//2204044
    scanf("%d", &rows);//2204044
    printf("Enter the number of columns: ");//2204044
    scanf("%d", &cols);//2204044
    int *array[rows][cols];//2204044
    printf("Enter elements of the array:\n");//2204044
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);//2204044
        }
    }
    printf("data elemnets:\n");//2204044
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);//2204044
        }
        printf("\n");//2204044
    }
    return 0;//2204044
}
