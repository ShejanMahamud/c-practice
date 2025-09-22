#include<stdio.h>

int main(){
    char S[100001];
    scanf("%s", S);
    int count = 0;
    while (S[count] != '\0')
    {
        if (S[count] >= 'a' && S[count] <= 'z')
        {
            S[count] -= 32; 
        }else if (S[count] >= 'A' && S[count] <= 'Z'){
            S[count] += 32;
        }
        if (S[count] == ',')
        {
            S[count] = ' ';
        }
        count++;
    }
    printf("%s", S);
  return 0;
}