#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

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

int main1() {
    float numOne;
    char operator;
    float numberTwo;
    float result;

    printf("Enter the first number: ");
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

/*int main() {
    int numOne = 1;
    while (numOne <= 10) {
        printf("%d\n", numOne);
        numOne += 1;
    }
}*/

/*int main() {
    int number;
    int result = 0;
    while (number != 0) {
        printf("Enter a number: ");
        scanf("%d", &number);
        result += number;
    }
    printf("The final result is %d", result);
}*/

/*int main() {
    int number;
    int newNum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    while (number) {
        newNum = newNum * 10 + number % 10;
        number = number / 10;
    }
    printf("The reversed number is %d", newNum);
}*/

/*int main() {
    for (int i = 2; i <= 20; i+= 2) {
        printf("%d\n", i);
    }
}*/

/*int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int result = 1;
    for (int i = number; i >= 1; i--) {
        result *= i;
    }
    printf("The result is %d", result);
}*/

/*int main() {
    int number;
    printf("Enter the number for the multiplication table: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", number, i, number * i);
    }
}*/

/*int main() {
    int number;
    int count = 0;
    printf("Enter a positive number: ");
    scanf("%d", &number);

    for (; number != 0;) {
        number /= 10;
        count += 1;
    }
    printf("%d", count);
}*/

/*int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}*/

/*int main() {
    int rows;
    int columns;
    char symbol;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter the symbol you want: ");
    scanf(" %c", &symbol);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
}*/

/*int main() {
    srand(time(NULL));
    int guess;
    printf("Enter your guess: ");
    scanf("%d", &guess);
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;
    while (guess != answer) {
        printf("Wrong number! Enter again: ");
        scanf("%d", &guess);
    }
    printf("You guessed the correct number!");
}*/

/*int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("*");
        }
    }
}*/


/*int computerMove(void);
int playerMove(void);
void checkWinner(int player, int computer);

int main(void) {
    srand(time(NULL));

    int computer = computerMove();
    int player = playerMove();

    switch(computer){
        case 1:
            printf("Computer chose ROCK\n");
            break;
        case 2:
            printf("Computer chose PAPPER\n");
            break;
        case 3:
            printf("Computer chose SCISSORS\n");
            break;
    }

    switch (player) {
        case 1:
            printf("You chose ROCK\n");
            break;
        case 2:
            printf("You chose PAPPER\n");
            break;
        case 3:
            printf("You chose SCISSORS\n");
            break;
    }

    checkWinner(player, computer);

    return 0;
}

int computerMove(void) {
    return rand() % 3 + 1;
}

int playerMove(void) {
    int player;

    printf("Select one of the following options:\n");
    printf("Rock: choose 1\n");
    printf("Paper: choose 2\n");
    printf("Scissors: choose 3\n");

    do {
        printf("Choose one of the allowed options: ");
        scanf("%d", &player);
    } while (player < 1 || player > 3);

    return player;
}

void checkWinner(int player, int computer) {
    if (player == computer) {
        printf("It is a draw!\n");
    }
    else if ((player == 1 && computer == 2) ||
             (player == 2 && computer == 3) ||
             (player == 3 && computer == 1)) {
        printf("The computer wins!\n");
             }
    else {
        printf("You win!\n");
    }
}*/

//Check Balance
//Deposit money
//Withdraw money
//Exit the banking app

/*void checkBalance(float balance);
float depositMoney(float balance);
float withdrawMoney(float balance);

int main() {
    float balance = 0.0f;
    int choice;

    do {
        printf("Enter 1 to check your balance\n");
        printf("Enter 2 to deposit money \n");
        printf("Enter 3 to withdraw money\n");
        printf("Enter 4 to exit the banking app\n");
        printf("Enter operation: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = depositMoney(balance);
                break;
            case 3:
                balance = withdrawMoney(balance);
                break;
            case 4:
                printf("Thank you for using the app! See you soon!");
                break;
            default:
                printf("Invalid operation, please try again!");
        }
    }while (choice != 4);
    return 0;
}

void checkBalance(float balance) {
    printf("Your current balance is $%.2f\n", balance);
}

float depositMoney(float balance) {
    float sum;
    printf("Enter the deposit: ");
    scanf("%f", &sum);
    if (sum <= 0) {
        printf("You should enter an amount of money\n");
        return balance;
    }
    else {
        return balance + sum;
    }
}

float withdrawMoney(float balance) {
    float sum;
    printf("Enter the amount of money for withdrawal: ");
    scanf("%f", &sum);
    if (sum > balance) {
        printf("Insufficient sum\n");
        return balance;
    }
    else {
        return balance - sum;
    }
}*/

/*int main() {
    int i;
    printf("Enter how many numbers you will type in the array: ");
    scanf("%d", &i);
    int nums[i];
    for (int j = 0; j < i; j++) {
        int k;
        printf("Enter a number to add to the array: ");
        scanf("%d", &k);
        nums[j] = k;
    }
    int numsCount = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < numsCount; i++) {
        printf("%d\n", nums[i]);
    }
}*/

/*int main() {
    char names[3][20];
    for (int i = 0; i < 3; i++) {
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }
    for (int j = 0; j < 3; j++) {
        printf("%s\n", names[j]);
    }
}*/

//Quiz game
int main() {
    char questions[5][100] = {
        "What is the highest peak?", "What is the deepest point of Earth?", "What is the highest building?", "What is the biggest country",
        "What is the biggest organ in the human body?"
    };
    int questionsCount = sizeof(questions) / sizeof(questions[0]);
    char correctAnswers[5] = {'C', 'B', 'A', 'D', 'B'};
    char options[][4][100] = {
        {
            "A. Mont Blanc",
           "B. Musala",
           "C. Everest",
           "D. Kilimanjaro"
        },
        {"A. Dupnitsa",
            "B. Mariana trench",
            "C. Baikal",
            "D. Samokov"
        },
        {"A. Burj Khalifa",
            "B. Sky fort",
            "C. Empire State Building",
            "D. Petron towers"},

        {"A. USA",
            "B. Canada",
            "C. Bulgaria",
            "D. Russia"},

        {"A. heart",
            "B. skin",
            "C. liver",
            "D. brain"}
    };
    int points = 0;
    for (int i = 0; i < questionsCount; i++) {
        printf("%s\n", questions[i]);
        for (int j = 0; j < 4; j++) {
            printf("%s\n", options[i][j]);
        }
        char answer;
        printf("Enter your answer (A, B, C or D): ");
        scanf(" %c", &answer);
        if (answer == correctAnswers[i]) {
            printf("Congratulations! Your answer is correct!\n");
            points += 1;
        }
        else {
            printf("Sorry, Your answer is wrong!\n");
        }
        }
    printf("Your total points are %d", points);
    }

