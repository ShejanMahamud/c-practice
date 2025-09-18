/*
Suppose your friend has told you that she will buy a Gucci Bag if she has 10 thousand taka or more. Otherwise if she has 5 thousand taka or more, she will buy a Levis Bag. Otherwise she will buy Something from New Market. She also told you that, if she could buy the Gucci bag and she has more than 20 thousand taka she will also buy a Gucci Belt.

Now, if you know the amount of money she has, can you tell which item/items she will buy?
See the sample input and output for more clarification.


Sample Input
Sample Output
20000
Gucci Bag
6500
Levis Bag
200
Something
25400
Gucci Bag
Gucci Belt
*/


#include<stdio.h>
int main(){
    int budget;
    printf("Enter your budget: \n");
    scanf("%d",&budget);
    if (budget >= 10000 && budget <= 20000)
    {
       printf("%s","Gucci Bag");
    }
    else if (budget >= 5000 && budget <= 10000)
    {
        printf("%s","Levis Bag");
    }else if (budget > 20000)
    {
        printf("%s %s","Gucci Bag\n","Gucci Belt");
    }else{
        printf("%s","Something");
    }
    
    return 0;
}