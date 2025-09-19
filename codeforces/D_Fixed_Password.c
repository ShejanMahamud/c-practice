#include<stdio.h>

int main(){
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if (a == 1999)
        {
            printf("%s\n", "Correct");
            break;
        }else{
            printf("%s\n","Wrong");
        }
        
    }
  return 0;
}