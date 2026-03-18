#include <stdio.h>
int someFunc();
int anotherFunc();
int pyramidFunc();
int countSum();
int evenOdd();
int greaterThanK();
int  sumNums();
int countFunction();
int mathFunction();

int main() {
    /*for (int i = 15; i >= 10; i--) {
        if (i == 10) {
            printf("%d\n", i);
        }
        else {
            printf("%d, ", i);
        }
    }*/
    //someFunc();
    //anotherFunc();
    //pyramidFunc();
    //countSum();
    //evenOdd();
    //greaterThanK();
    //sumNums();
    //countFunction();
    mathFunction();
}

int someFunc() {
    int i = 10;
    while (i >= 5) {
        printf("%d\n", i);
        i -= 1;
    }
    return 0;
}

int anotherFunc() {
    int i = 10;
    do {
        printf("%d, ", i);
        i++;
    }while (i <= 20);
}

int pyramidFunc() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}


int countSum() {
    int numOne;
    int numTwo;
    int sumNums = 0;

    printf("Enter first number: ");
    scanf("%d", &numOne);

    printf("Enter second number: ");
    scanf("%d", &numTwo);

    if (numOne > numTwo) {
        for (int i = numTwo + 1; i < numOne; i++) {
            sumNums += i;
        }

    }
    else {
        for (int i = numOne + 1; i < numTwo; i++) {
            sumNums += i;
        }
    }
    printf("%d", sumNums);
}

int evenOdd() {
    int numOne;
    int numTwo;
    int sumEvenNums = 0;
    int productOddNums = 1;

    printf("Enter first number: ");
    scanf("%d", &numOne);

    printf("Enter second number: ");
    scanf("%d", &numTwo);

    if (numOne > numTwo) {
        for (int i = numTwo + 1; i < numOne; i++) {
            if (i % 2 == 0) {
                sumEvenNums += i;
            }
            else {
                productOddNums *= i;
            }
        }
    }
    else {
        for (int i = numOne + 1; i < numTwo; i++) {
            if (i % 2 == 0) {
                sumEvenNums += i;
            }
            else {
                productOddNums *= i;
            }
        }

    }
    printf("%d", sumEvenNums);
    printf("%d", productOddNums);
}

int greaterThanK(){
    int N;
    int K;
    int countNums = 0;

    printf("Enter a number for N: ");
    scanf("%d", &N);

    printf("Enter a number for K: ");
    scanf("%d", &K);

    for (int i = 1; i <= N; i++) {
        int someNum;
        printf("Enter a number: ");
        scanf("%d", &someNum);

        if (someNum > K && someNum % 3 == 0) {
            countNums += 1;
        }
    }
    printf("%d", countNums);
}

int sumNums() {
    int i;
    int countNums = 0;

    while (i != 0) {
        printf("Enter a number: ");
        scanf("%d", &i);
        countNums += i;
    }
    printf("%d", countNums);
}

int countFunction() {
    int numOne;
    int numTwo;

    printf("Enter the first number: ");
    scanf("%d", &numOne);

    printf("Enter the second number");
    scanf("%d", &numTwo);

    if (numOne > numTwo) {
        for (int i = numTwo + 1; i < numOne; i++) {
            printf("%d\n", i * i - 4);
        }
    }
    else {
        for (int i = numOne + 1; i < numTwo; i++) {
            printf("%d\n", i * i - 4);
        }
    }
}

int mathFunction() {
    float beg;
    float end;
    float delta;
    float a;
    float b;
    float m;

    printf("Enter number for beginning: ");
    scanf("%f", &beg);

    printf("Enter number for end: ");
    scanf("%f", &end);

    printf("Enter number for a step: ");
    scanf("%f", &delta);

    printf("Enter number for a: ");
    scanf("%f", &a);

    printf("Enter number for b: ");
    scanf("%f", &b);

    printf("Enter number for m: ");
    scanf("%f", &m);

    if (beg > end) {
        printf("Invalid peration, Enter new numbers: ");
        scanf("%f", &beg);
        scanf("%f", &end);
    }
    else {
        if (beg <= m && m <= end){
            for (float x = beg; x <= end; x+=delta) {
                if (x <= m) {
                    printf("%.1f\n", b + x);
                }
                else {
                    if (x == 0) {
                        continue;
                    }

                    printf("%.1f\n", a * x / 4 - x);
                }
            }
        }
    }
}