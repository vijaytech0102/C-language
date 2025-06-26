#include <stdio.h>

int main() {
   
    char choice;

    do {
        printf("1. Add\n");
        printf("2. Sub\n");
        printf("3. Mul\n");
        printf("4. Divide\n");
        printf("5. Mod\n");
        printf("Enter your choice: ");

        int ch;
        scanf("%d", &ch);  // ✅ Use &ch to store input correctly

        int a, b;

        switch (ch) {
            case 1:
                printf("Enter the value of a & b: ");
                scanf("%d %d", &a, &b);
                printf("Sum: %d\n", a + b);
                break;
            case 2:
                printf("Enter the value of a & b: ");
                scanf("%d %d", &a, &b);
                printf("Sub: %d\n", a - b);
                break;
            case 3:
                printf("Enter the value of a & b: ");
                scanf("%d %d", &a, &b);
                printf("Multiply: %d\n", a * b);
                break;
            case 4:
                printf("Enter the value of a & b: ");
                scanf("%d %d", &a, &b);
                if (b != 0)
                    printf("Divide: %d\n", a / b);
                else
                    printf("Error: Division by zero\n");
                break;
            case 5:
                printf("Enter the value of a & b: ");
                scanf("%d %d", &a, &b);
                if (b != 0)
                    printf("Mod: %d\n", a % b);
                else
                    printf("Error: Modulo by zero\n");
                break;
            default:
                printf("Wrong choice\n");
        }

        printf("Do you want to continue (Y/y to continue)? ");
        scanf(" %c", &choice);  // ✅ Space before %c to consume newline

    } while (choice == 'Y' || choice == 'y');

    return 0;
}
