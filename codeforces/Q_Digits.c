#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        do{
         printf("%d ",n%10);
         n /= 10;
        }
        while (n != 0);
        printf("\n");
    }
    
    
  return 0;
}

/*
121%10=1
n = 12
12 % 10 = 2 
n = 1
1
*/