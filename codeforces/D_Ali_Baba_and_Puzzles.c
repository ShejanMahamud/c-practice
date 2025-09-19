#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a + b * c == d)
    {
        printf("%s", "YES");
    }else if (a - b * c == d)
    {
        printf("%s", "YES");
    }else if (a * b + c == d)
    {
        printf("%s", "YES");
    }else if (a * b - c == d)
    {
        printf("%s", "YES");
    }else if (a - b + c == d){
        printf("%s", "YES");
    }else if (a + b - c == d){
        printf("%s", "YES");
    }else{
        printf("%s", "NO");
    }
    
  return 0;
}