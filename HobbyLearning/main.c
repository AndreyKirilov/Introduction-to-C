#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/*int main() {
    printf("My nephew's name is Ivan\n");

    int age = 19;
    float weight = 74.1;
    double pi = 3.1415999;
    char grade = 'A';
    char name[] = "Andrey Ivanov Kirilov";
    bool isStudent = true;

    printf("I am %d years old\n", age);
    printf("I weigh %.2f kilograms\n", weight);
    printf("The number pi is equal to %lf\n", pi);
    printf("My grade for the semester is %c\n", grade);
    printf("My full name is %s\n", name);

    if (isStudent) {
        printf("%s is a student\n", name);
    }
    else {
        printf("%s is not a student because he is %d years old\n", name, age);
    }

    int a = 10;
    int b = 4;
    b += 3;
    printf("The result is: %d\n", a % b);

    return 0;
}*/

/*int main() {
    int numOne;
    int numTwo;

    printf("Enter first number: ");
    scanf("%d", &numOne);

    printf("Enter second number: ");
    scanf("%d", &numTwo);

    printf("The sum of the two numbers is: %d", numOne + numTwo);
    return 0;
}*/


/*int main() {
    float numOne;
    float numTwo;

    printf("Enter first number: ");
    scanf("%f", &numOne);

    printf("Enter second number: ");
    scanf("%f", &numTwo);

    printf("The product of the two numbers is: %.2f", numOne * numTwo);
    return 0;
}*/

/*int main() {
    int numOne;
    printf("Enter the number: ");
    scanf("%d", &numOne);

    if (numOne % 2 == 0) {
        printf("The number %d is even", numOne);
    }
    else {
        printf("The number %d is odd", numOne);
    }
    return 0;
}*/

/*int main() {
    char grade;
    printf("Enter a grade: ");
    scanf(" %c", &grade);
    printf("Your grade is: %c", grade);
    return 0;
}*/

/*int main() {
    char name[30];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s", name);
}*/

/*int main() {
    char fullName[100];
    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Hello, %s", fullName);
}*/

/*int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 13) {
        printf("You are a kid");
    }
    else if(13 <= age & age <= 19) {
        printf("You are a teen");
    }
    else {
        printf("You are an adult");
    }
}*/

/*int main() {
    char name[30];
    char surname[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your surname: ");
    fgets(surname, sizeof(surname), stdin);


    printf("Your whole name is %s %s", name, surname);
    return 0;
}*/

/*int main() {
    float radius;
    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);

    printf("The area of the circle is %.2f\n", 3.14 * pow(radius, 2));
    printf("The length of the circle is %.2f\n", 2 * 3.14 * radius);
    printf("The volume of the circle is %.2f\n", (4 / 3) * 3.14 * pow(radius, 3));
    return 0;
}*/

/*int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    if (num < 0) {
        printf("The number is negative");
    }
    else {
        printf("The number is 0 or positive");
    }
    return 0;
}*/

/*int main() {
    int numOne;
    int numTwo;
    int numThree;
    int biggestNum = -9999999999999;
    int i;

    printf("Enter the first number: ");
    scanf("%d", &numOne);

    printf("Enter the second number: ");
    scanf("%d", &numTwo);

    printf("Enter the third number: ");
    scanf("%d", &numThree);

    for (i; 3; i++) {
        if (i > biggestNum) {
            biggestNum = i;
        }
    }
    printf("The biggest number is: %d\n", biggestNum);
}*/

int main() {
    float numOne;
    char operator;
    float numberTwo;
    float result;

    printf("Enter the first numebr: ");
    scanf("%f", &numOne);

    printf("Enter the operator (+/-/*//: " );
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%f", &numberTwo);

    switch (operator) {
        case '+':
            result = numOne + numberTwo;
            break;
        case '-':
            result = numOne - numberTwo;
            break;
        case '*':
            result = numOne * numberTwo;
            break;
        case '/':
            if (numberTwo == 0) {
                printf("You can't divide by zero");
            }
            else {
                result = numOne / numberTwo;
                break;
            }
    }

    printf("The result is %.2f", result);
    return 0;
}