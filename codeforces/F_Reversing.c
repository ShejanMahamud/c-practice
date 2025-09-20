#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = n - 1; i >= 0; i--)
    {
     scanf("%d", &arr[i]);   
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    
  return 0;
}