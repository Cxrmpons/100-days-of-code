//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    long long binary, complement = 0;
    int i = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        if (binary % 10 == 0) {
            complement += 1 * i;
        }
        binary /= 10;
        i *= 10;
    }

    printf("1's complement: %lld\n", complement);
    return 0;
}

