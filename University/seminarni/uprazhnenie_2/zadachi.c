#include <stdio.h>
#include <stdbool.h>

/* ZADACHA 1 int biggerNum(int numOne, int numTwo);
int smallerNum(int numOne, int numTwo);

int main() {
    int numOne;
    int numTwo;

    while (true) {
        printf("Enter your first number: ");
        scanf("%d", &numOne);

        printf("Enter your second number: ");
        scanf("%d", &numTwo);
        if (numOne == 0 || numTwo == 0) {
            break;
        }

        printf("The bigger number is: %d\n", biggerNum(numOne, numTwo));
        printf("The smaller number is: %d\n", smallerNum(numOne, numTwo));
    }
}

int biggerNum(int numOne, int numTwo) {
    if (numOne > numTwo) {
        return numOne;
    }
    else {
        return numTwo;
    }
}

int smallerNum(int numOne, int numTwo) {
    if (numOne < numTwo) {
        return numOne;
    }
    else {
        return numTwo;
    }
}*/

/* ZADACHA 2 int main() {
    int hours;
    int minutes;

    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    if (minutes < 45) {
        minutes += 15;
    }
    else {
        hours += 1;
        minutes -= 45;
    }

    if (minutes < 10) {
        printf("The time will be %d:0%d after 15 minutes", hours, minutes);
    }
    else {
        printf("The time will be %d:%d after 15 minutes", hours, minutes);
    }
}*/

/*ZADACHA 3 void areEqual(int a, int b, int c);
int main() {
    int a;
    int b;
    int c;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    printf("Enter number c: ");
    scanf("%d", &c);
    areEqual(a, b, c);
}

void areEqual(int a, int b, int c) {
    if (a == b && a == c && b == c) {
         printf("Yes");
    }
    else {
        printf("No");
    }
}*/

/*ZADACHA 4 int main() {
    int points;
    int bonus = 0;
    printf("Enter number of points: ");
    scanf("%d", &points);

    if (points <= 100) {
        bonus += 5;
    }
    else if (points > 100 && points <= 1000) {
        bonus = points * 0.2;
    }
    else{
        bonus = points * 0.1;
    }

    if (points % 2 == 0) {
        bonus += 1;
    }
    if (points % 10 == 5) {
        bonus += 2;
    }
    points += bonus;
    printf("Bonus points: %d\n", bonus);
    printf("Total points: %d\n", points);


}*/

/* ZADACHA 5 int main() {
    int firstSeconds;
    int secondSeconds;
    int thirdSeconds;
    printf("Enter first time: ");
    scanf("%d", &firstSeconds);
    printf("Enter second time: ");
    scanf("%d", &secondSeconds);
    printf("Enter third time: ");
    scanf("%d", &thirdSeconds);

    int totalSum = firstSeconds + secondSeconds + thirdSeconds;
    int minutes = totalSum / 60;
    int seconds = totalSum % 60;
    printf("The total time is: %d:%02d", minutes, seconds);
}*/

/*ZADACHA 6 int main() {
    float x1, y1, x2, y2;
    float x, y;

    scanf("Enter values for x1 and y1: %f %f", &x1, &y1);
    scanf("Enter values for x2 and y2: %f %f", &x2, &y2);
    scanf("Enter values for x and y: %f %f", &x, &y);

    if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
        printf("It is inside");
    }
    else {
        printf("It is outside");
    }
}*/

int main() {
    char element;
    int i;
    int j;
    int height = 5;

    printf("Enter an element: ");
    scanf(" %c", &element);

    for (i = 0; i < height; i++) {
        for (j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        if (i == 0) {
            printf("%c", element);
        }
        else if (i == height - 1) {
            for (j = 0; j < 2 * height - 1; j++) {
                printf("%c", element);
            }
        }
        else {
            printf("%c", element);
            for (j = 0; j < 2 * i - 1; j++) {
                printf(" ");
            }
            printf("%c", element);
        }
        printf("\n");

    }
}