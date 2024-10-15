//
// Created by SUBRATA on 14/10/2024.
//
int Even_Odd(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (Even_Odd(n)) {
        printf("Number is Even\n");

    }
    else {
        printf("Number is Odd\n");
    }
    return 0;

}