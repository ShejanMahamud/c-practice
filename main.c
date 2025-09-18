#include<stdio.h>

int main (void) {
    int a,b;
    printf("Welcome to calculator\n");
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("The sum of %d and %d is %d\n", a, b, a+b);
    return 0;
}
/*
format specifier
%d => int
%f => float
%c => char
%lld => long long int
%lf = double(long float)
*/