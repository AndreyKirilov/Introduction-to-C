#include <stdio.h>
#include <stdlib.h>
//ZADACHA 1
/*int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int m;
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int someArray[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int someNum;
            printf("Enter number for position [%d][%d]", i, j);
            scanf("%d", &someNum);
            someArray[i][j] = someNum;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (someArray[i][j] > someArray[i + 1][j]) {
                printf("No!");
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (someArray[i][j] > someArray[i][j+1]) {
                printf("No");
            }
        }
    }

    printf("Yes!");
}*/


//ZADACHA 3
/*
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int maxRow = 0, minRow = 0;
    int maxSum, minSum;

    // сума на първия ред
    maxSum = 0;
    minSum = 0;
    for (int j = 0; j < m; j++) {
        maxSum += arr[0][j];
        minSum += arr[0][j];
    }

    for (int i = 1; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += arr[i][j];
        }

        if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }

        if (sum < minSum) {
            minSum = sum;
            minRow = i;
        }
    }

    for (int j = 0; j < m; j++) {
        int temp = arr[maxRow][j];
        arr[maxRow][j] = arr[minRow][j];
        arr[minRow][j] = temp;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

/*int main() {
    int n;
    printf("Enter a number for n: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter a number to add to the array: ");
        scanf("%d", &arr[i]);
    }

    int *primeArr = malloc(n * sizeof(int));
    int *nonPrimeArr = malloc(n * sizeof(int));

    if (primeArr == NULL || nonPrimeArr == NULL) {
        free(arr);
        free(primeArr);
        free(nonPrimeArr);
        return 1;
    }

    int primeCount = 0;
    int nonPrimeCount = 0;

    for (int i = 0; i < n; i++) {
        int x = arr[i];
        int isPrime = 1;

        if (x < 2) {
            isPrime = 0;
        } else {
            for (int j = 2; j * j <= x; j++) {
                if (x % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            primeArr[primeCount] = x;
            primeCount++;
        } else {
            nonPrimeArr[nonPrimeCount] = x;
            nonPrimeCount++;
        }
    }

    // Преоразмеряване по реалния брой елементи
    primeArr = realloc(primeArr, primeCount * sizeof(int));
    nonPrimeArr = realloc(nonPrimeArr, nonPrimeCount * sizeof(int));

    printf("Non prime array: ");
    for (int i = 0; i < nonPrimeCount; i++) {
        printf("%d ", nonPrimeArr[i]);
    }
    printf("\n");

    printf("Vtori masiv s prostite chisla: ");
    for (int i = 0; i < primeCount; i++) {
        printf("%d ", primeArr[i]);
    }
    printf("\n");

    free(arr);
    free(primeArr);
    free(nonPrimeArr);

    return 0;
}*/



/*int main() {
    int n;
    printf("Enter number of rows for the array: ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns for the array: ");
    scanf("%d", &m);
    int someArray[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int someNum;
            printf("Enter number of elements: ");
            scanf("%d", &someNum);
            someArray[i][j] = someNum;
        }
    }

    for (int j = 0; j < m; j++) {
        int currentRowSum = 0;
        for (int i = 0; i < n; i++) {
            currentRowSum += someArray[i][j];
        }
        printf("The sum of the numbers in the columns: %d\n", currentRowSum);

    }
}*/

int main() {
    int n;
    printf("Enter number of elements for rows and columns: ");
    scanf("%d", &n);

    int A[n][n];
    int B[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int someNum;
            printf("Enter element for array A: ");
            scanf("%d", &someNum);
            A[i][j] = someNum;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int someNum;
            printf("Enter element for array B: ");
            scanf("%d", &someNum);
            B[i][j] = someNum;
        }
    }

    int isNegative = 1;
    for (int i = 0; i < n; i++) {
        if (A[i][n - 1] < 0) {
            isNegative = 0;
        }
    }
    if (isNegative == 0) {
        for (int i = 0; i < n; i++) {
            B[i][i] = 1;
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            B[i][n - 1 - i] = -1;
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %d ", A[i][j]);
        }
    }
    printf("\n");
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++){
            printf(" %d ", B[j][i]);
        }
    }
}