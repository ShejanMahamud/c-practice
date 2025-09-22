#include<stdio.h>

int main(){
    char S[1001];
    scanf("%s", S);
    char T[1001];
    scanf("%s", T);

    int sCount = 0;
    int tCount = 0;

    while (S[sCount] != '\0')
    {
        sCount++;
    }

    while (T[tCount] != '\0')
    {
        tCount++;
    }

    printf("%d %d\n", sCount, tCount);
    printf("%s %s", S, T);

  return 0;
}