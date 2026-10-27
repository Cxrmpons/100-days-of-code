//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, swappedNum;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Get the last digit
    lastDigit = num % 10;

    // Get the first digit
    temp = num;
    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;

    // Swap the first and last digit
    swappedNum = lastDigit;
    temp = num / 10;
    while (temp >= 10) {
        swappedNum = swappedNum * 10;
        temp /= 10;
    }
    swappedNum = swappedNum * 10 + firstDigit;

    printf("Original number: %d\n", num);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}