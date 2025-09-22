#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    int limit = 10;
    for (int i = 0; i < T; i++)
    {
        int count = 0;
        char S[101];
    scanf("%s", S); 
    
    while (S[count] != '\0')
    {
        count++;
    }
    if (count > 10)
    {
        printf("%c%d%c\n",S[0], count - 2, S[ count - 1]);
    }
    else{
        printf("%s\n", S);
    }
    }
  return 0;
}