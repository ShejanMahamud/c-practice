#include<stdio.h>

int main(){
    char A[11];
    scanf("%s", A);
    char B[11];
    scanf("%s", B);
    int a_count = 0, b_count = 0;

    while (A[a_count] != '\0')
    {
        a_count++;
    }
    while (B[b_count] != '\0')
    {
     b_count++;   
    }
    printf("%d %d\n", a_count, b_count);
    printf("%s%s\n", A, B);    
    int tmp = A[0];
    A[0] = B[0];
    B[0] = tmp;
    printf("%s %s", A, B);
  return 0;
}