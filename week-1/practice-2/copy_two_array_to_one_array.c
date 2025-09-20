#include<stdio.h>

int main(){
    int m;
    scanf("%d", &m);
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }
    int n;
    scanf("%d", &n);
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int ans[m + n];
    for (int i = 0; i < m+ n; i++)
    {
        ans[i] = arr[i];
    }

    int j = m;

    for (int i = 0; i < n; i++)
    {
        ans[j] = arr2[i];
        j++;
    }
    
    
    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", ans[i]);
    }
    
  return 0;
}