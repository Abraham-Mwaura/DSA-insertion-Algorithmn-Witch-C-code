/*
Insertion algorithmn
1.Start
2.Set Item and position k
3.Set j= n(array length)
4.Set j+1 =j
5.Repeat step 4 for j>=k
*/

#include <stdio.h>
int main()
{
    int LA[] = {1, 3, 5, 7, 8};
    int item = 300, k = 0, n = 5;
    int i = 0, j = n;

    printf("The original array elements are : \n");

    for (i = 0; i < n; i++)
    {
        printf("LA[%d] = %d \n", i, LA[i]);
    }

    n = n + 1;

    while (j >= k)
    {
        LA[j + 1] = LA[j];
        j = j - 1;
    }

    LA[k] = item;

    printf("The array elements after insertion : \n");

    for (i = 0; i < n; i++)
    {
        printf("LA[%d] =%d \n", i, LA[i]);
    }
}
