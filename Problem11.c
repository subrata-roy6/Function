//
// Created by SUBRATA on 14/10/2024.
//
int add(int a, int b) {
    return a + b;
}
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the two number:");
    scanf("%d%d", &a, &b);
    printf("The sum is: %d", add(a, b));
    return 0;
}