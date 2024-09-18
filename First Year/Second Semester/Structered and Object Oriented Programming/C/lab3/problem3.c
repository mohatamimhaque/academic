#include <stdio.h>//2204044
int main() {
    int n;
    printf("Enter the number of elements: ");//2204044
    scanf("%d", &n);//2204044
    if (n <= 0) {
        printf("Invalid input. Number of elements should be greater than zero.\n");//2204044
        return 1;//2204044
    }
    float numbers[n];//2204044
    printf("Enter %d floating-point numbers:\n", n);//2204044
    for (int i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);//2204044
        scanf("%f", &numbers[i]);//2204044
    }
    float max = numbers[0];//2204044
    float min = numbers[0];//2204044
    float sum = numbers[0];//2204044
    for (int i = 1; i < n; ++i) {
        if (numbers[i] > max) {
            max = numbers[i];//2204044
        }
        if (numbers[i] < min) {
            min = numbers[i];//2204044
        }
        sum += numbers[i];//2204044
    }
    float average = sum / n;//2204044
    printf("\nResults:\n");//2204044
    printf("Maximum: %.2f\n", max);//2204044
    printf("Minimum: %.2f\n", min);//2204044
    printf("Average: %.2f\n", average);//2204044

    return 0; //2204044
}
