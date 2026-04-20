#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*struct Books {
    char title[40];
    char author[30];
    char tema[20];
    int id_book;
};

int main() {
    struct Books book_1;
    fgets(book_1.title, sizeof(book_1.title), stdin);
    strcpy(book_1.title, "Some title");


}*/

/*typedef struct Person {
    char name[50];
    int citNo;
    float salary;
} p;

int main() {
    p *personOne = malloc(sizeof(p));
    printf("Enter a name: ");
    fgets((*personOne).name, sizeof((*personOne).name), stdin);
    printf("Enter a birth year :");
    scanf("%d", &(*personOne).citNo);
    printf("Enter salary: ");
    scanf("%f", &(*personOne).salary);

    printf("The person's name is %s, he is born in %d and has a salary of %.2f", (*personOne).name, (*personOne).citNo, (*personOne).salary);

}*/

/*typedef struct Author {
    char name[50];
    int age;
} a;

typedef struct Book {
    char title[60];
    a author;
} b;

int main() {
    a authorOne;
    b bookOne;
    printf("Enter author's name: ");
    fgets(bookOne.author.name, sizeof(bookOne.author.name), stdin);
    printf("Enter author's age: ");
    scanf("%d", &bookOne.author.age);
    printf("The author's name is %s and he is %d years old", bookOne.author.name, bookOne.author.age);


}*/

//ZADACHA 1
/*struct Point {
    int x;
    int y;
    int z;
};

int main() {
    struct Point pointArray[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter x-axis: ");
        scanf("%d", &pointArray[i].x);
        printf("Enter y-axis: ");
        scanf("%d", &pointArray[i].y);
        printf("Enter z-axis: ");
        scanf("%d", &pointArray[i].z);
    }

    int AB = sqrt(pow(pointArray[1].x - pointArray[0].x, 2) + pow(pointArray[1].y - pointArray[0].y, 2) + pow(pointArray[1].z - pointArray[0].z, 2));
    int BC = sqrt(pow(pointArray[2].x - pointArray[1].x, 2) + pow(pointArray[2].y - pointArray[1].y, 2) + pow(pointArray[2].z - pointArray[1].z, 2));
    int AC = sqrt(pow(pointArray[2].x - pointArray[0].x, 2) + pow(pointArray[2].y - pointArray[0].y, 2) + pow(pointArray[2].z - pointArray[0].z, 2));

    printf("The length of AB is %dcm.\n", AB);
    printf("The length of BC is %dcm.\n", BC);
    printf("The length of AC is %dcm.", AC);


}*/

//ZADACHA 2
/*typedef struct Vehicle {
    char brand[50];
    int horsePower;
    int maxSpeed;
    float price;
} v;

typedef struct FullVehicle {
    char type[20];
    v vehicle;
} fv;




int main() {
    fv vehicleOne = {"Car", {"BMW", 245, 250, 14000} };
    fv vehicleTwo = {"Bus", {"Mercedes-Benz", 180, 190, 10000}};

    if (vehicleOne.vehicle.maxSpeed > vehicleTwo.vehicle.maxSpeed) {
        printf("The %s is faster than %s\n", vehicleOne.vehicle.brand, vehicleTwo.vehicle.brand);
    }
    else {
        printf("The %s is faster than %s\n", vehicleTwo.vehicle.brand, vehicleOne.vehicle.brand);
    }

    if (vehicleOne.vehicle.price > vehicleTwo.vehicle.price) {
        printf("%s is more expensive than %s", vehicleOne.vehicle.brand, vehicleTwo.vehicle.brand);
    }
    else {
        printf("%s is more expensive than %s", vehicleTwo.vehicle.brand, vehicleOne.vehicle.brand);
    }
}
*/

struct Student {
    char name[50];
    int age;
    float grade;
};

struct Class {
    int studentCount;
    struct Student studentsArray[30];
};

struct studentClass {
    int classCount;
    struct Class classesArray[5];
};

int main() {
    struct studentClass sc;
    printf("Enter number of classes: ");
    scanf("%d", &sc.classCount);
    float totalSumGrades = 0;
    int totalStudents = 0;
    char smartestStudentName[50];
    float bestStudentGrade = 0;
    for (int i = 0; i < sc.classCount; i++) {
        float classSumGrades = 0;
        struct Class c;
        printf("Enter number of students in the class: ");
        scanf("%d", &c.studentCount);
        getchar();
        totalStudents += c.studentCount;
        for (int j = 0; j < c.studentCount; j++) {
            printf("Enter student's name: ");
            fgets(c.studentsArray[j].name, sizeof(c.studentsArray[j].name), stdin);
            c.studentsArray[j].name[strlen(c.studentsArray[j].name) - 1] = '\0';
            printf("Enter student's age: ");
            scanf("%d", &c.studentsArray[j].age);
            printf("Enter student's grade: ");
            scanf("%f", &c.studentsArray[j].grade);
            getchar();
            classSumGrades += c.studentsArray[j].grade;
            totalSumGrades += c.studentsArray[j].grade;
            if (c.studentsArray[j].grade > bestStudentGrade) {
                bestStudentGrade = c.studentsArray[j].grade;
                strcpy(smartestStudentName, c.studentsArray[j].name);
            }
        }
        float averageClassGrade = classSumGrades / c.studentCount;
        printf("The average grade in class %d is: %.2f\n", i + 1, averageClassGrade);
    }
    float totalAverageGrade = totalSumGrades / totalStudents;
    printf("The average grade of all classes is: %.2f\n", totalAverageGrade);
    printf("The smartest student is %s with a grade of %.2f\n", smartestStudentName, bestStudentGrade);

}