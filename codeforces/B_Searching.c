#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    int found = -1;
    for (int t = 0; t < n; t++)
    {   
        if (x == arr[t])
        {   
            found = t;
            break;
        }
        else
        {
            found = -1;
        }
    }
    printf("%d", found);
    
  return 0;
}