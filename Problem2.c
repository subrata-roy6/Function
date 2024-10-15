//
// Created by SUBRATA on 14/10/2024.
//
void fu(int *a,int *b) {
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
#include<stdio.h>
int main() {
    int a,b;
    printf("Enter number for a and b :");
    scanf("%d %d",&a,&b);
    fu(&a,&b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;

}