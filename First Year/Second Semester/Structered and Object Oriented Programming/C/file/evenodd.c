#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3;
    int i, data;

    // Open the input file for writing
    f1 = fopen("input.txt", "w");
    if (f1 == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    // Read data from the user and write to the input file
    for (i = 0; i < 10; i++) {
        scanf("%d", &data);
        if (data == 0) break;
        fprintf(f1, "%d\n", data);
    }
    fclose(f1);

    // Open the input file for reading
    f1 = fopen("input.txt", "r");
    if (f1 == NULL) {
        printf("Error opening input file for reading!\n");
        return 1;
    }

    // Open the output files for writing
    f2 = fopen("even.txt", "w");
    if (f2 == NULL) {
        printf("Error opening even file!\n");
        fclose(f1);
        return 1;
    }

    f3 = fopen("odd.txt", "w");
    if (f3 == NULL) {
        printf("Error opening odd file!\n");
        fclose(f1);
        fclose(f2);
        return 1;
    }

    // Read data from the input file and write to the respective even or odd file
    while (fscanf(f1, "%d", &data) != EOF) {printf("%d\t",data);
        if (data % 2 == 0) {
            fprintf(f2, "%d\n", data);
        } else {
            fprintf(f3, "%d\n", data);
        }
    }

    // Close all files
    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}
