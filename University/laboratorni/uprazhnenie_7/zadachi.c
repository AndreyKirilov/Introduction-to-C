#include <stdio.h>
#include <stdlib.h>
//ZADACHA 1:
/*int main() {
    int n;
    int countEvenOddPosition = 0;
    printf("Enter numbers in the array: ");
    scanf("%d", &n);
    int *someArray = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        int someNum;
        printf("Enter an element: ");
        scanf("%d", &someNum);
        someArray[i] = someNum;
    }

    for (int i = 1; i < n; i+=2) {
        if (someArray[i] % 2 == 0) {
            countEvenOddPosition += 1;
        }
    }
    printf("The number of the elements is: %d", countEvenOddPosition);
}*/

//ZADACHA 2
/*int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int *someArray = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        int someNum;
        printf("Enter a 4-digit number: ");
        scanf("%d", &someNum);
        if (1000 <= abs(someNum) && abs(someNum) <= 9999) {
            someArray[i] = someNum;
        }
    }
    int *newArray = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        int countNums = 0;
            while (abs(someArray[i]) > 0) {
                countNums += someArray[i] % 10;
                someArray[i] = someArray[i] / 10;
            }
            newArray[i] = countNums;
    }
    for (int i = 0; i < n; i++) {
        printf(" %d ", newArray[i]);
    }
}*/

//ZADACHA 3
/*int main() {
    int n;
    printf("Enter how many numbers you want to add to the arary: ");
    scanf("%d", &n);
    int *someArray = malloc(n * sizeof(int));
    int countElements = 0;

    if (someArray == NULL) {
        printf("Not enough memory!");
        free(someArray);
    }

    for (int i = 0; i < n; i++) {
        int someNum;
        printf("Enter a number for the array: ");
        scanf("%d", &someNum);
        someArray[i] = someNum;
    }

    for (int i = 0; i < n; i++) {
        if (someArray[i] != 0) {
            countElements += 1;
        }
    }

    int *newArray = malloc(countElements * sizeof(int));
    for (int i = 0, k = 0; i < n; i++) {
        if (someArray[i] != 0) {
            newArray[k] = someArray[i];
            k += 1;
        }
    }
    for (int i = 0; i < countElements; i++) {
        printf(" %d ", newArray[i]);
    }
}*/

//ZADACHA 4
/*int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int columns;
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    int someArray[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            int someNum;
            printf("Enter a number for the array on position [%d][%d]: ", i, j);
            scanf("%d", &someNum);
            someArray[i][j] = someNum;
        }
    }
    int countNegative = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (someArray[i][j] < 0) {
                countNegative += 1;
            }
        }
    }
    int newArray[countNegative];
    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (someArray[i][j] < 0) {
                newArray[k] = someArray[i][j];
                k += 1;
            }
        }
    }

    for (int i = 0; i < countNegative; i++) {
        printf(" %d ", newArray[i]);
    }
}*/

//ZADACHA 5
/*int main() {
    int rows;
    int columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    int someArray[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            int someNum;
            printf("Enter a number for the element on [%d][%d]: ", i, j);
            scanf("%d", &someNum);
            if (someNum > 0) {
                someArray[i][j] = someNum;
            }
        }
    }
    int sumNums = 0;
    int countNums = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            int currentIndexSum = i + j;
            if (someArray[i][j] % currentIndexSum == 0) {
                sumNums += someArray[i][j];
                countNums += 1;
            }
        }
    }
    float averageNum = sumNums / countNums;
    printf("The average value of the nums in the array is: %.2f", averageNum);
}*/

//ZADACHA 6
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    float *prices = malloc(n * sizeof(float));
    int *quantities = malloc(n * sizeof(int));

    if (prices == NULL || quantities == NULL) {
        printf("Not enough memory!");
        free(prices);
        free(quantities);
    }
    for (int i = 0; i < n; i++) {
        float someNum;
        printf("Enter a number: ");
        scanf("%f", &someNum);
        prices[i] = someNum;
    }
    for (int i = 0; i < n; i++) {
        int someNum;
        printf("Enter a number: ");
        scanf("%d", &someNum);
        quantities[i] = someNum;
    }
    float productNum = 1;
    for (int i = 0; i < n; i++) {
        productNum *= prices[i] * quantities[i];
    }
    int m;
    printf("Enter more elements: ");
    scanf("%d", &m);

    int newSize = n + m;
    float *newPrices = realloc(prices, newSize * sizeof(float));
    int *newQuantities = realloc(quantities, newSize * sizeof(int));
    if (newPrices == NULL || newQuantities == NULL) {
        printf("Not enough memory!");
        free(newPrices);
        free(newQuantities);
    }

    for (int i = n; i < newSize; i++) {
        float someNum;
        printf("Enter a number for the array: ");
        scanf("%f", &someNum);
        newPrices[i] = someNum;
    }
    for (int i = n; i < newSize; i++) {
        int someNum;
        printf("Enter a number for the array: ");
        scanf("%d", &someNum);
        newQuantities[i] = someNum;
    }
    for (int i = 0; i < newSize - 1; i++) {
        for (int j = 0; j < newSize - 1 - i; j++) {
            if (newPrices[j] > newPrices[j + 1]) {
                float temp = newPrices[j];
                newPrices[j] = newPrices[j + 1];
                newPrices[j + 1] = temp;
                float newTemp = newQuantities[j];
                newQuantities[j] = newQuantities[j + 1];
                newQuantities[j + 1] = newTemp;
            }
        }
    }
    for (int i = 0; i < newSize; i++) {
        printf(" %d ", newPrices[i]);
    }
    for (int i = 0; i < newSize; i++) {
        printf(" %d ", newQuantities[i]);
    }
    free(newPrices);
    free(newQuantities);
}
