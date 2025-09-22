#include<stdio.h>

int main(){
    char S[1000001];
    scanf("%s", S);
    int a = 0;
    int sum = 0;
    while (S[a] != '\0')
    {
        sum = sum + (S[a] - '0');
        a++;
    }
    printf("%d", sum);
  return 0;
}