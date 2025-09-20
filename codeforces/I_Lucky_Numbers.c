#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int lastDigit = n % 10;
    int fistDigit = n / 10;
    if (lastDigit % fistDigit == 0 || fistDigit % lastDigit == 0)
    {
        printf("%s", "YES");
    }else{
        printf("%s", "NO");
    }
    
  return 0;
}