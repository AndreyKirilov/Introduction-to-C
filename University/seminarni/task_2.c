#include <stdio.h>

int main2() {
    int a;
    float b;
    char c;

    printf("Enter the number a: ");
    scanf("%d", &a);

    printf("Enter the real number b: ");
    scanf("%f", &b);

    printf("Enter the character c: ");
    scanf(" %c", &c);

    printf("%d, %f, %c", a, b, c);
}