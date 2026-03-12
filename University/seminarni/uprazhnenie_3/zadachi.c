#include <stdio.h>
#include <math.h>

 //ZADACHA 1:
//float squareArea(float a);
//float rectangleArea(float a, float b);
//float triangleArea(float a, float b);
//float circleArea(float radius);

//int main() {
    //float num;
    //printf("1 for square\n");
    //printf("2 for rectangle\n");
    //printf("3 for triangle\n");
    //printf("4 for circle\n");
    //printf("Enter a number: ");
    //scanf("%f", &num);
    //printf("%.2f\n", circleArea(5));
    //printf("%.2f", circleArea(num));


    //if (num == 1) {
        //float a;
        //printf("Enter a number for the square's side: ");
        //scanf("%f", &a);
        //printf("The type of the figure is square and its area is %.2f", squareArea(a));
    //}

    //else if(num == 2) {
        //float a;
        //float b;
        //printf("Enter a number for the rectangle's first side: ");
        //scanf("%f", &a);
        //printf("Enter a number for the rectangle's second side: ");
        //scanf("%f", &b);
        //printf("The type of the figure is rectangle and its area is %.2f", rectangleArea(a, b));
    //}

    //else if (num == 3) {
        //float a;
        //float b;
        //printf("Enter a number for the triangle's first side: ");
        //scanf("%f", &a);
        //printf("Enter a number for the triangle's second side: ");
        //scanf("%f", &b);
        //printf("The type of its figure is triangle and its area is %.2f", triangleArea(a, b));
    }

    //else if (num == 4) {
        //float radius;
        //printf("Enter a value for the radius: ");
        //scanf("%f", &radius);
        //printf("The type of the figure is circle and its area is %.2f", squareArea(radius));
    //}

//}

//float squareArea(float a) {
    //return a * a;
//}

//float rectangleArea(float a, float b) {
    //return a * b;
//}

//float triangleArea(float a, float b) {
    //return (a * b) / 2;
//}

//float circleArea(float radius) {
    //return 3.14 * radius * radius;
//}

/*ZADACHA 2:
void swapFunc(int *x, int *y);

int main() {
    int x;
    int y;
    printf("Enter a value for your first number: ");
    scanf("%d", &x);
    printf("Enter a value for your second number: ");
    scanf("%d", &y);
    printf("Your first number before the swap is %d\n", x);
    printf("Your second number before the swap is %d\n", y);
    swapFunc(&x, &y);
    printf("The value of your first number is %d and the value of your second number is %d after the swap", x, y);
}

void swapFunc(int *x, int *y) {
    int newNum = *x;
    *x = *y;
    *y = newNum;
}*/
/*ZADACHA 3:
void checkEvenOdd(int num);
int main() {
    int num;
    printf("Enter a number to check whether a number is even or odd: ");
    scanf("%d", &num);
    checkEvenOdd(num);
}

void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("The number is even.");
    }
    else {
        printf("The number is odd.");
    }
}*/

/*ZADACHA 4:
 *void binaryTransformation(int num);

int main() {
    int number;
    printf("Enter a number to turn it into binary: ");
    scanf("%d", &number);
    printf("The binary representation of %d is: ", number);
    binaryTransformation(number);
}

void binaryTransformation(int num) {
    int binaryNum[32];
    int i = 0;
    while (num > 0) {
        binaryNum[i] = num % 2;
        num /= 2;
        i += 1;

    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
}*/
/* ZADACHA 5:
int sumNums(int one, int two, int three);
int biggestNum(int one, int two, int three);
int smallestNum(int one, int two, int three);
int averageNum(int one, int two, int three);

int main() {
    int numOne;
    int numTwo;
    int numThree;

    printf("Enter a value for the first number: ");
    scanf("%d", &numOne);

    printf("Enter a value for the second number: ");
    scanf("%d", &numTwo);

    printf("Enter a value for the third number: ");
    scanf("%d", &numThree);

    printf("The sum of the numbers is %d", sumNums(numOne, numTwo, numThree));
    printf("The biggest number of the three is %d", biggestNum(numOne, numTwo, numThree));
    printf("The smallest number of the three is %d", smallestNum(numOne, numTwo, numThree));
    printf("The average sum of the three numbers is %d", averageNum(numOne, numTwo, numThree));
}

int sumNums(int one, int two, int three) {
    return one + two + three;
}

int biggestNum(int one, int two, int three) {
    if (one > two && one > three) {
        return one;
    }
    else if (two > one && two > three) {
        return two;
    }
    else if (three > one && three > two) {
        return three;
    }
}

int smallestNum(int one, int two, int three) {
    if (one < two && one < three) {
        return one;
    }
    else if (two < one && two < three) {
        return two;
    }
    else if (three < one && three < two) {
        return three;
    }
}

int averageNum(int one, int two, int three) {
    return (one + two + three) / 3;
}*/
/*ZADACHA 6:
void findRoots(float a, float b, float c);
int main() {
    float a;
    float b;
    float c;

    printf("Enter value for a: ");
    scanf("%f", &a);

    printf("Enter value for b: ");
    scanf("%f", &b);

    printf("Enter value for c: ");
    scanf("%f", &c);

    findRoots(a, b, c);

}

void findRoots(float a, float b, float c) {
    float d = (b * b) - (4 * a * c);
    if (d < 0) {
        printf("There are no solutions for the equation");
    }
    else if (d == 0) {
        printf("There is one solution for the equation\n");
        printf("%.2f", -b / 2 * a);
    }
    else {
        printf("There are two solutions for the equation\n");
        printf("x1: %.2f\n", (-b - sqrt(d)) / (2 * a));
        printf("x2: %.2f\n", (-b + sqrt(d)) / (2 * a));
    }
}*/