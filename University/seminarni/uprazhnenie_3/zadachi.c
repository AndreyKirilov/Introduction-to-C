#include <stdio.h>
#include <string.h>
//ZADACHA 1
/*
int main() {
    int n;
    printf("Enter number of elements for the array: ");
    scanf("%d", &n);

    int someArray[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the number on index %d: ", i);
        scanf("%d", &someArray[i]);
    }

    int currentLongest = 1;
    int finalLongest = 1;
    int currentStart = 0;
    int longestIndex = 0;

    for (int i = 1; i < n; i++) {
        if (someArray[i] == someArray[i - 1]) {
            currentLongest += 1;
        }
        else {
            currentLongest = 1;
            currentStart = i;
        }

        if (currentLongest > finalLongest) {
            finalLongest = currentLongest;
            longestIndex = currentStart;
        }
    }

    printf("The longest sequence has length %d and starts at index %d\n",finalLongest, longestIndex);

    return 0;
}*/

//ZADACHA 2
/*int main() {
    int n;
    printf("Enter the number of elements for the array: ");
    scanf("%d", &n);
    int someArray[n];

    for (int i = 0; i < n; i++) {
        int someNum;
        printf("Enter the element for index %d: ", i);
        scanf("%d", &someNum);
        someArray[i] = someNum;
    }

    for (int i = 1; i < n; i++) {
        if (n - 1 == i) {
            if (someArray[i] > someArray[i - 1]) {
                printf("The array is valid!");
                break;
            }
        }
        if (someArray[i] > someArray[i - 1] && someArray[i] < someArray[i + 1]) {
            continue;
        }

        else {
            printf("The array is invalid!");
            break;
        }
    }
}*/
//ZADACHA 3
/*int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int someArray[n];

    for (int i = 0; i < n; i++) {
        int someNum;
        printf("Enter number for index %d: ", i);
        scanf("%d", &someNum);
        someArray[i] = someNum;
    }

    for (int i = 0; i < n / 2; i++) {
        int temp = someArray[i];
        someArray[i] = someArray[n - 1 - i];
        someArray[n - 1 - i] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", someArray[i]);
    }

}*/

//ZADACHA 4
/*
int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int someArray[n];
    int k;

    printf("Enter the number of positions you want to move for the array: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        printf("Enter number for index %d: ", i);
        scanf("%d", &someArray[i]);
    }


    for (int i = 0; i < n / 2; i++) {
        int temp = someArray[i];
        someArray[i] = someArray[n - 1 - i];
        someArray[n - 1 - i] = temp;
    }

    for (int i = 0; i < k / 2; i++) {
        int temp = someArray[i];
        someArray[i] = someArray[k - 1 - i];
        someArray[k - 1 - i] = temp;
    }

    for (int i = 0; i < (n - k) / 2; i++) {
        int temp = someArray[k + i];
        someArray[k + i] = someArray[n - 1 - i];
        someArray[n - 1 - i] = temp;
    }

    printf("Result: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", someArray[i]);
    }

    printf("\n");

    return 0;
}*/
//ZADACHA 5
/*int main() {
    int n;
    printf("Enter the number of elements for the array: ");
    scanf("%d", &n);
    int someArray[n];
    int k;
    printf("Enter the row of the k biggest element in the array: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        int someNum;
        printf("Enter the number for the element on index %d", i);
        scanf("%d", &someNum);
        someArray[i] = someNum;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (someArray[j] < someArray[j + 1]) {
                int temp = someArray[j];
                someArray[j] = someArray[j + 1];
                someArray[j + 1] = temp;
            }
        }
    }

    printf("The %dnd biggest number in the array is %d", k, someArray[k - 1]);
}*/

//ZADACHA 7
/*int main() {
    int n;
    printf("Enter the number of elements for the array: ");
    scanf("%d", &n);

    int someArray[n];
    int k;

    printf("Enter the number which sum you want to find: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        printf("Enter a number for position %d: ", i);
        scanf("%d", &someArray[i]);
    }
    for (int start = 0; start < n; start++) {
        int currentSum = 0;
        for (int end = start; end < n; end++) {
            currentSum += someArray[end];

            if (currentSum == k) {
                printf("The sum is achieved!\n");
                printf("Sequence: ");
                for (int i = start; i <= end; i++) {
                    printf("%d ", someArray[i]);
                }
                printf("\n");
                return 0;
            }
        }
    }

    printf("No sequence found.\n");
    return 0;
}*/

//ZADACHA 6
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int someArray[n];
    int x;
    printf("Enter the number which you want to see how many times is in the array: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        int someNum;
        printf("Enter the number for position %d: ", i);
        scanf("%d", &someNum);
        someArray[i] = someNum;
    }

    int countOccurences = 0;
    for (int i = 0; i < n; i++) {
        if (someArray[i] == x) {
            countOccurences += 1;
        }
    }
    printf("The number %d is seen %d times throughout the array!", x, countOccurences);


}