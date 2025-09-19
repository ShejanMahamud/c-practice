#include<stdio.h>

int main(){
    char x;
    scanf("%c", &x);
    if (x >= '0' && x <= '9')
    {
        printf("%s", "IS DIGIT\n");
    }else{
        printf("%s", "ALPHA\n");
        if (x >= 'a' && x <= 'z')
        {
            printf("%s", "IS SMALL\n");
        }else{
            printf("%s", "IS CAPITAL\n");
        }
        
    }
    
  return 0;
}