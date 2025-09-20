#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a;
    int posSum = 0;
    int negSum = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a > 0)
        {
            posSum += a;
        }else{
            negSum += a;
        }
        
    }
    printf("%d %d", posSum, negSum);
  return 0;
}