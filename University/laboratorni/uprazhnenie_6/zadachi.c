#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main() {
    int i;
    double* p;
    p = calloc(10, sizeof(double));
    for(int i = 0; i < 10; i++) {
        *(p + i) = i;
    }

    for (i = 0; i < 10; i++) {
        printf("*(p + %d) = %.2lf\n", i, *(p+i));
    }
    free(p);
    putchar('\n');
}*/

/*struct Student {
    char name[30];
    int age;
    float grade;
};

typedef struct {
    char name[50];
    int age;
    double grade;
} Student;

int main(void) {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    Student *students = malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Name: ");
        scanf("%49s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Grade: ");
        scanf("%lf", &students[i].grade);
    }

    printf("\nEntered students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %.2lf\n", students[i].grade);
    }

    free(students);
    return 0;
}*/

/*int main() {
    int r;
    printf("Enter how much numbers you want: ");
    scanf("%d", &r);
    int *someArray = calloc(r, sizeof(int));

    for (int i = 0; i < r; i++) {
        int someNum;
        printf("Enter a number: ");
        scanf("%d", &someNum);
        someArray[i] = someNum;
    }
    int numSum = 0;
    for (int i = 0; i < r; i++) {
        numSum += someArray[i];
    }
    printf("The sum of the numbers is: %d\n", numSum);

    int z;
    printf("Again enter how much numbers you want: ");
    scanf("%d", &z);
    int newSize = r + z;
    int *someArray2 = realloc(someArray, newSize * sizeof(int));

    for (int j = r; j < z + r; j++) {
        int someNum;
        printf("Enter a number: ");
        scanf("%d", &someNum);
        someArray2[j] = someNum;
    }
    int numsProduct = 1;
    for (int j = 0; j < z + r; j++) {
        numsProduct *= someArray2[j];
    }
    printf("The product of all the numbers is: %d\n", numsProduct);


    int smallestNum = someArray2[0];
    for (int i = 1; i < z + r; i++) {
        if (smallestNum > someArray2[i]) {
            smallestNum = someArray2[i];
        }
    }
    printf("The smallest number in the array is: %d\n", smallestNum);
    for (int i = 0; i < r + z - 1; i++) {
        for (int j = 0; j < r + z - i - 1; j++) {
            if (someArray2[j] < someArray2[j + 1]) {
                int temp = someArray2[j];
                someArray2[j] = someArray2[j + 1];
                someArray2[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < z + r; i++) {
        printf(" %d ", someArray2[i]);
    }
}*/

void increaseNumbers(int *x, int *y, int numberIncrease);
int main() {
    int x;
    printf("Enter a number for x: \n");
    scanf("%d", &x);
    int y;
    printf("Enter a number for y: \n");
    scanf("%d", &y);
    int numberIncrease;
    printf("Enter how much numbers you want to increase: \n");
    scanf("%d", &numberIncrease);
    int *pX = &x;
    int *pY = &y;
    increaseNumbers(pX, pY, numberIncrease);
    printf("%d\n", x);
    printf("%d\n", y);
}

void increaseNumbers(int *x, int *y, int numberIncrease) {
    *x += numberIncrease;
    *y += numberIncrease;
}