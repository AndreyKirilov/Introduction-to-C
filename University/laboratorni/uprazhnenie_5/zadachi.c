// Find the sum of all integers in a 2D array
#include <stdio.h>

/*int main(){
    int sum = 0;
    int someArray[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += someArray[i][j];
        }
    }
    printf("The final sum is %d", sum);
}*/

//ZADACHA 1
/*int main() {
    int n;
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d", &n);

    int someMatrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int someNum;
            printf("Enter a number to add to the matrix: ");
            scanf("%d", &someNum);
            someMatrix[i][j] = someNum;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d", someMatrix[i][i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("%d", someMatrix[i][n - 1 - i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (j > i){
            printf("%d", someMatrix[i][j]);
                }
        }
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
                printf("%d", someMatrix[i][j]);
            }
        }
    }
    printf("\n");


}*/
//ZADACHA 2
/*int main() {
    int magicalSquare[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter a number for the position [%d][%d]: ", i, j);
            scanf("%d", &magicalSquare[i][j]);
        }
    }

    int firstRowSum = 0;
    for (int j = 0; j < 3; j++) {
        firstRowSum += magicalSquare[0][j];
    }

    int secondRowSum = 0;
    for (int j = 0; j < 3; j++) {
        secondRowSum += magicalSquare[1][j];
    }

    int thirdRowSum = 0;
    for (int j = 0; j < 3; j++) {
        thirdRowSum += magicalSquare[2][j];
    }

    int firstColumnSum = 0;
    for (int i = 0; i < 3; i++) {
        firstColumnSum += magicalSquare[i][0];
    }

    int secondColumnSum = 0;
    for (int i = 0; i < 3; i++) {
        secondColumnSum += magicalSquare[i][1];
    }

    int thirdColumnSum = 0;
    for (int i = 0; i < 3; i++) {
        thirdColumnSum += magicalSquare[i][2];
    }

    int mainDiagonalSum = 0;
    for (int i = 0; i < 3; i++) {
        mainDiagonalSum += magicalSquare[i][i];
    }

    int reverseDiagonalSum = 0;
    for (int i = 0; i < 3; i++) {
        reverseDiagonalSum += magicalSquare[i][2 - i];
    }

    if (firstRowSum * 8 == firstRowSum + secondRowSum + thirdRowSum + firstColumnSum + secondColumnSum + thirdColumnSum + mainDiagonalSum + reverseDiagonalSum) {
        printf("This is a magical square!");
    }
    else {
        printf("This is NOT a magical square!");
    }

    return 0;
}*/

// 1 2 3         7 4 1
// 4 5 6         8 5 2
// 7 8 9         9 6 3


//ZADACHA 3
/*int main() {
    int someMatrix[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int someNum;
            printf("Enter a number for position[%d][%d]: ", i, j);
            scanf("%d", &someNum);
            someMatrix[i][j] = someNum;
        }
    }
    int newMatrix[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            newMatrix[j][2 - i] = someMatrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", newMatrix[i][j]);
        }
        printf("\n");
    }
}
*/


//ZADACHA 4
/*int main() {
    int m;
    int n;

    printf("Enter a number for rows: ");
    scanf("%d", &m);
    printf("Enter a number for columns: ");
    scanf("%d", &n);

    int someMatrix[m][n];
    int startingNumber = 1;

    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                someMatrix[i][j] = startingNumber;
                startingNumber++;
            }
        }
        else {
            for (int j = n -1; j >= 0; j--) {
                someMatrix[i][j] = startingNumber;
                startingNumber++;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", someMatrix[i][j]);
        }
        printf("\n");
    }
}
*/
