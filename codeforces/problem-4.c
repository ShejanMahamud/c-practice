#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    while (n >= 10)
    {
        n /= 10;
    }
    if (n % 2 == 0)
    {
       printf("%s", "EVEN");
    }else{
        printf("%s", "ODD");
    }
    
  return 0;
}
/*
2500/10=250
250/10=25
25/10=2.5
so first digit is 2
*/