//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main() {
    float num1, num2;
    char operator;

    printf("Enter two numbers and an operator (+, -, *, /, %): ");
    scanf("%f %f %c", &num1, &num2, &operator);

    switch (operator) {
        case '+':
            printf("%.2f\n", num1 + num2);
            break;
        case '-':
            printf("%.2f\n", num1 - num2);
            break;
        case '*':
            printf("%.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                printf("%d\n", (int)num1 % (int)num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, /, or %.\n");
    }

    return 0;
}