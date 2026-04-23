#include <stdio.h>
#include <stdlib.h>
/*int main() {
    FILE *fp;
    char str[20] = "Some Text";
    char *p;
    if ((fp = fopen("my file", "w")) == NULL) {
        printf("Cannot open file. \n");
        exit(1);
    }
    p = str;
    while (*p) {
        if (fputc(*p, fp) == EOF) {
            printf("Error writing file. \n");
            exit(1);
        }
        p++;
    }
}*/

/*int main() {
    FILE *writeFile(char *fname);
    FILE *fp;
    int a = 0;
    fp = fopen(fname, "w");
    if (!fp) {
        return NULL;
    }
    printf("Vavedete celi chisla, za krai natisnete ...: ");
    while (scanf("%d", &a) == 1) {
        fprintf(fp, "%d ", a);
    }
}
void readFile(FILE *fp, char *fname) {
    int a = 0;
    fp = fopen(fname, "r")
    if (!fp) exit(1);
    while (fscanf(fp, "%d", &a) == 1) {
        printf("%d", a);
    }
    fclose(fp);
}*/

/*int main() {
    int n = 5;
    int *someArray = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        int someNum;
        printf("Enter a number: ");
        scanf("%d", &someNum);
        someArray[i] = someNum;
    }
    FILE *someFile;
    someFile = fopen("some_file.txt", "w");
    if (someFile ==NULL) {
        printf("Not enough memory!");
        return 1;
    }
    fwrite(someArray, sizeof(int), 5, someFile);
    fclose(someFile);
    return 0;

}*/
//zadacha 1
/*
int main() {
    int n;
    printf("Enter numbers: ");
    scanf("%d", &n);
    int someArray[n + 1];
    FILE *someFileTwo;
    someFileTwo = fopen("test_file.bin", "wb");
    if (someFileTwo == NULL) {
        printf("Error handling file");
        return 1;
    }
    fwrite(&n, sizeof(int), 1, someFileTwo);
    for (int i = 0; i < n; i++) {
        int someNum;
        printf("Enter a number: ");
        scanf("%d", &someNum);
        fwrite(&someNum, sizeof(int), 1, someFileTwo);
    }
    fclose(someFileTwo);
    someFileTwo = fopen("test_file.bin", "rb");

    int evenSum = 0;
    int oddSum = 0;
    for (int i = 0; i < n + 1; i++) {
        int num;
        fread(&num, sizeof(int), 1, someFileTwo);
        someArray[i] = num;
        if (num % 2 == 0) {
            evenSum += 1;
        }
        else {
            oddSum += 1;
        }
    }
    printf("The count of the even numbers is %d\n", evenSum);
    printf("The count of the odd numbers is %d\n", oddSum);
    fclose(someFileTwo);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (someArray[j] > someArray[j + 1]) {
                int temp = someArray[j];
                someArray[j] = someArray[j + 1];
                someArray[j + 1] = temp;
            }
        }
    }
    FILE *someFileThree = fopen("test_file.txt", "w");
    if (someFileThree == NULL) {
        printf("Error handling file");
        return 1;
    }
    for (int i = 0; i < n + 1; i++) {
        fprintf(someFileThree, "%d ", someArray[i]);
    }
    fclose(someFileThree);
    someFileThree = fopen("test_file.txt", "r");
    for (int i = 0; i < n + 1; i++) {
        fscanf(someFileThree, "%d", &someArray[i]);
        printf("%d ", someArray[i]);
    }
    fclose(someFileThree);
    return 0;
}
*/

//ZADACHA 2
/*
int main() {
    FILE *someFile;
    someFile = fopen("zadacha_2.bin", "wb");
    int n;
    printf("Enter a number: \n");

    while (scanf("%d", &n) == 1) {
        printf("Enter a number: \n");
        fwrite(&n, sizeof(int), 1, someFile);
    }
    fclose(someFile);

    someFile = fopen("zadacha_2.bin", "rb");
    int i;
    int evenCount = 0;
    int oddCount = 0;
    int totalNums = 0;

    while (fread(&i, sizeof(int), 1, someFile) == 1) {
        totalNums += 1;
        if (i % 2 == 0) {
            evenCount += 1;
        }
        else {
            oddCount += 1;
        }
    }

    printf("The count of the even nums is %d\n", evenCount);
    printf("The count of the odd nums is %d\n", oddCount);
    fclose(someFile);

    int someArray[totalNums];
    someFile = fopen("zadacha_2.bin", "rb");

    for (int j = 0; j < totalNums; j++) {
        fread(&someArray[j], sizeof(int), 1, someFile);
    }
    fclose(someFile);
    for (int j = 0; j < totalNums - 1; j++) {
        for (int k = 0; k < totalNums - 1 - j; k++) {
            if (someArray[k] > someArray[k + 1]) {
                int temp = someArray[k];
                someArray[k] = someArray[k + 1];
                someArray[k + 1] = temp;
            }
        }
    }
    FILE *someFileTwo = fopen("zadacha_2.txt", "w");
    for (int j = 0; j < totalNums; j++) {
        fprintf(someFile, "%d ", someArray[j]);
    }
    fclose(someFileTwo);
    someFileTwo = fopen("zadacha_2.txt", "r");
    int someNum;
    while (fscanf(someFileTwo, "%d", &someNum) == 1) {
        printf("%d ", someNum);
    }

}*/
