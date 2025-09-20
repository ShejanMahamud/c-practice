#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos;
    scanf("%d", &pos);
    for (int i = pos; i < n -1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int k = 0; k < n - 1; k++)
    {
        printf("%d ", arr[k]);
    }
    
  return 0;
}