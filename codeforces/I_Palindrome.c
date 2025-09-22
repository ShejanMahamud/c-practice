#include<stdio.h>

int main(){
    char S[1001];
    scanf("%s", S);
    int count = 0;
    int isPalindrome = 1;
    while (S[count] != '\0')
    {
        count++;
    }
    int i = 0;
    int j = count -1;
    while (i < j)
    {
        if (S[i] != S[j])
        {
            isPalindrome = 0;
            break;
        }  
        i++;
        j--;  
    }


    if (isPalindrome)
    {
        printf("%s", "YES");
    }
    else
    {
        printf("%s", "NO");
    }
  return 0;
}