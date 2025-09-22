#include<stdio.h>
#include<string.h>

int main(){
    char S[1000001];
    fgets(S,sizeof(S), stdin);
    int a = 0;
    while (S[a] != '\\')
    {
        printf("%c", S[a]);
        a++;
    }
    
  return 0;
}