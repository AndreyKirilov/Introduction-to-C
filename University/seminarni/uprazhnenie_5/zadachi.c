#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//ZADACHA 1
/*int main() {
    int tables = 0;
    int chairs = 0;
    int cups = 0;
    int dishes = 0;
    int peopleNum;
    float moneySpend = 0;
    printf("Enter the number of people for the party: ");
    scanf("%d", &peopleNum);
    int neededChairs = peopleNum;
    int neededTables = peopleNum / 8;
    int neededCups = peopleNum / 6;
    int neededDishes = peopleNum / 6;

    getchar();

    while (1) {
        char command[50];
        printf("Enter the subject: ");
        fgets(command, sizeof(command), stdin);
        command[strlen(command) - 1] = '\0';
        if (strcmp(command, "PARTY!") == 0) {
            break;
        }
        else if (strcmp(command, "Table") == 0) {
            tables += 1;
            moneySpend += 42.00;
        }
        else if (strcmp(command, "Chair") == 0) {
            chairs += 1;
            moneySpend += 13.99;
        }
        else if (strcmp(command, "Cups") == 0) {
            cups += 1;
            moneySpend += 5.98;
        }
        else if (strcmp(command, "Dishes") == 0) {
            dishes += 1;
            moneySpend += 21.02;
        }
    }
    printf("Money spent: %.2f\n", moneySpend);
    if (chairs != peopleNum) {
        int missingChairs = neededChairs - chairs;
        printf("You need %d more chairs\n", missingChairs);
    }
    if (peopleNum % 8 != 0) {
        neededTables += 1;
        int missingTables = neededTables - tables;
        printf("You need %d more tables\n", missingTables);
    }
    if (peopleNum % 6 != 0) {
        neededCups += 1;
        int missingCups = neededCups - cups;
        printf("You need %d more cups\n", missingCups);
    }
    if (peopleNum % 6 != 0) {
        neededDishes += 1;
        int missingDishes = neededDishes - dishes;
        printf("You need %d more dishes\n", missingDishes);
    }

}*/

//ZADACHA 2
/*struct Product {
    char name[30];
    float price;
    int id;
};

struct Order {
    char address[40];
   int product_id;
};

int main() {
    struct Product products[50];
    int productCount = 0;
    struct Order orders[50];
    int orderCount = 0;

    while (1) {
        char command[20];
        printf("Enter a command: ");
        fgets(command, sizeof(command), stdin);
        command[strlen(command) - 1] = '\0';

        if (strcmp(command, "END") == 0) {
            break;
        }

        if (strcmp(command, "Product") == 0) {
            struct Product p;
            printf("Enter product name: ");
            fgets(p.name, sizeof(p.name), stdin);
            p.name[strlen(p.name) - 1] = '\0';
            printf("Enter product price: ");
            scanf("%f", &p.price);
            getchar();
            printf("Enter product id: ");
            scanf("%d", &p.id);
            getchar();
            products[productCount] = p;
            productCount += 1;

                for (int i = 0; i < orderCount; i++) {
                    if (p.id == orders[i].product_id) {
                        printf("Client %s ordered %s\n", orders[i].address, p.name);
                        orders[i] = orders[orderCount - 1];
                        orderCount -= 1;
                        i--;
                    }
                }
        }

        else if (strcmp(command, "Order") == 0) {
            int flag = 0;
            struct Order o;
            printf("Enter order address: ");
            fgets(o.address, sizeof(o.address), stdin);
            o.address[strlen(o.address) - 1] = '\0';
            printf("Enter product id for the order: ");
            scanf("%d", &o.product_id);
            getchar();
            for (int i = 0; i < productCount; i++) {
                if (o.product_id == products[i].id) {
                    flag = 1;
                    printf("Client %s ordered %s\n", o.address, products[i].name);
                    break;
                }
            }
            if (flag == 0) {
                orders[orderCount] = o;
                orderCount += 1;
            }
        }
    }
    return 0;
}*/


/*int main() {
    int someArray[] = {5, 3, 2, 4, 1};
    for (int i = 0; i < sizeof(someArray) / sizeof(someArray[0]) - 1; i++) {
       for (int j = 0; j < sizeof(someArray) / sizeof(someArray[0]) - i - 1; j++) {
           if (someArray[j] > someArray[j + 1]) {
               int temp = someArray[j];
               someArray[j] = someArray[j + 1];
               someArray[j + 1] = temp;
           }
       }
    }
    for (int i = 0; i < sizeof(someArray) / sizeof(someArray[0]); i++) {
        printf(" %d ", someArray[i]);
    }
}*/
int main() {
    FILE *someFile = fopen("input.txt", "w");
    fprintf(someFile, "apple car price elephant head tire cool soft eleven output night tent story movies pleasure memory time search shortcut river compare evening");
    char *wordArray = malloc(1 * sizeof(char));
    int inWord = 0;
    char currentChar;

    while (1) {
        char someChar = fgetc(someFile);
        if (someChar == EOF) {
            break;
        }
        else if (someChar == ' ') {
            inWord = 0;
        }
        else if (someChar != ' ') {
            if (inWord == 0) {
                char currentWord[30];
                inWord = 1;
                int currentIndexCount = 0;
                currentWord[currentIndexCount] = someChar;
                currentIndexCount += 1;
            }
            else if (inWord == 1) {

            }
        }
    }
}