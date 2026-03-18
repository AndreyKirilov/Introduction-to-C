#include <stdio.h>
#include <string.h>

int main1() {
    float a;
    float b;

    printf("Enter the first side: ");
    scanf("%f", &a);

    printf("Enter the second side: ");
    scanf("%f", &b);

    float rectangleArea = a * b;
    printf("The area of the rectange is %.3f cm^2", rectangleArea);

}