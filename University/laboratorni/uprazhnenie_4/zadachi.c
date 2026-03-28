#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// ZADACHA 9
/*char* capitaliseString(char someString[50]);

int main() {
    char someString[50];
    printf("Enter a string to capitalize: ");
    fgets(someString, sizeof(someString), stdin);
    printf("The capitalized string is: %s\n", capitaliseString(someString));
}

char* capitaliseString(char someString[50]) {
    for (int i = 0; i < strlen(someString); i++) {
        someString[i] = toupper(someString[i]);
    }
    return someString;
}*/

//ZADACHA 8
/*void countLetters(char someString[50], int counter[26]);

int main() {
    int counter[26] = {0};
    char someString[50];
    printf("Enter a string: ");
    fgets(someString, sizeof(someString), stdin);
    countLetters(someString, counter);
    for (int i = 0; i < 26; i++) {
        if (counter[i] > 0) {
            printf("%c - %d times\n", i + 'a', counter[i]);
        }
    }
}

void countLetters(char someString[50], int counter[26]) {
    for (int i = 0; i < strlen(someString); i++) {
        if (isalpha(someString[i])) {
            someString[i] = tolower(someString[i]);
            int index = someString[i] - 'a';
            counter[index] += 1;
        }
    }
}*/
//ZADACHA 7
/*
int wordCounter(char someString[50]);
int main() {
    char someString[50];
    printf("Enter a text to count the number of words in it: ");
    fgets(someString, sizeof(someString), stdin);
    printf("There are %d words in the text", wordCounter(someString));

}
int wordCounter(char someString[50]) {
    int counter = 0;
    for (int i = 0; i < strlen(someString); i++) {
        if (i == 0) {
            if (someString[i] != ' ') {
                counter += 1;
            }
        }
        else if (someString[i] != ' ' && someString[i-1] == ' ') {
            counter += 1;
        }
    }
    return counter;
}*/

//ZADACHA 6
/*int main() {
    int counter = 0;
    char someString[50];
    printf("Enter a string in order to find its length: ");
    fgets(someString, sizeof(someString), stdin);
    someString[strlen(someString) - 1] = '\0';

    for (int i = 0; i < sizeof(someString); i++) {
        if (someString[i] == '\0') {
            break;
        }
        else {
            counter += 1;
        }
    }
    printf("The string's length is %d", counter);
}*/

//ZADACHA 5
/*int main() {
    int elements[7];

    for (int i = 0; i < 7; i++) {
        while (1) {
            int x;
            printf("Enter a number: ");
            scanf("%d", &x);

            if (x >= -5000 && x <= 5000) {
                elements[i] = x;
                break;
            }
        }
    }

    for (int i = 1; i < 7; i++) {
        for (int j = i; j > 0; j--) {
            if (elements[j] < elements[j - 1]) {
                int temporaryValue = elements[j];
                elements[j] = elements[j - 1];
                elements[j - 1] = temporaryValue;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        printf("%d\n", elements[i]);
    }
}*/

/*int main() {
    int arr[5], i;
    printf("Size of integer in this compiler is %lu\n", sizeof(int));
    for (int i = 0; i < 5; i++) {
        printf("Addres arr[%d] is %p\n", i, &arr[i]);
    }
}*/
/*int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int* ptr = arr;
    printf("Size of arr[] %ld\n", sizeof(arr));
    printf("Size of ptr %ld", sizeof(ptr));
    return 0;
}*/

/*int main() {
    char name[20];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    puts(name);
    return 0;
}*/

//ZADACHA 1, 2, 3, 4
/*int main() {
    int elements[7];
    int totalSum = 0;
    float averageValue = 0.0;
    int closestValue;
    int closestValueIndex;
    int absValue;
    int smallestNum;

    for (int i = 0; i < 7; i++) {
        while (1) {
            int x;
            printf("Enter a number: ");
            scanf("%d", &x);

            if (x >= -300 && x <= 300) {
                elements[i] = x;
                break;
            }
        }
    }
    for (int i = 0; i < 7; i++) {
        totalSum += elements[i];
    }
    averageValue = totalSum / 7.0;

    for (int i = 0; i < 7; i++) {
        if (i == 0){
            closestValue = elements[i];
            closestValueIndex = i;
            absValue = fabsf(averageValue - elements[i]);
            smallestNum = elements[i];
        }
        else {
            if (fabs(averageValue - elements[i]) < absValue) {
                closestValue = elements[i];
                closestValueIndex = i;
                absValue = fabs(averageValue - elements[i]);
            }
            if (elements[i] < smallestNum) {
                smallestNum = elements[i];
            }
        }
    }
    printf("Smallest number: %d\n", smallestNum);
    printf("Total sum of the elements: %d\n", totalSum);
    printf("Average value: %.2f, Closest value: %d, its index is %d\n", averageValue, closestValue, closestValueIndex);
}*/

int main() {
    char stringOne[50];
    char stringTwo[50];
    printf("Enter value for the first string: ");
    fgets(stringOne, sizeof(stringOne), stdin);
    printf("Enter a value for the second string: ");
    fgets(stringTwo, sizeof(stringTwo), stdin);
    stringOne[strlen(stringOne) - 1] = '\0';
    stringTwo[strlen(stringTwo) - 1] = '\0';
    int lengthOne = 0;
    int lengthTwo = 0;

    for (int i = 0; i < sizeof(stringOne); i++) {
        if (stringOne[i] != '\n') {
            lengthOne += 1;
        }
        else {
            break;
        }
    }
    for (int j = 0; j < sizeof(stringTwo); j++) {
        if (stringTwo[j] != '\n') {
            lengthTwo += 1;
        }
        else {
            break;
        }
    }
    if (lengthOne > lengthTwo) {
        printf("First string is bigger than the second");
    }
    else if (lengthOne == lengthTwo) {
        printf("Both srtings have the same length");
    }
    else {
        printf("String two is bigger than the first");
    }

}


