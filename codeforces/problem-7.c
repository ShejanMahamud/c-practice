#include<stdio.h>

int main(){
    int n;
    int found = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++){
        if (i % 2 == 0)
        {
            found = 1;
            printf("%d\n", i);
        }
    }
    if (found == 0)
    {
        printf("%d\n", -1);
    }
    
  return 0;
}