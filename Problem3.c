//
// Created by SUBRATA on 14/10/2024.
//Avarage
void avg(int a, int b, int c) {
    float avg;
    avg = (a + b + c) / 3;
    printf("The average number : %.2f",avg);
}
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter the three number: ");
    scanf("%d %d %d", &a, &b, &c);
    avg(a, b, c);

}