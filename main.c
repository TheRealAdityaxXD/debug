#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    int i;

    if(n = 1)              // LOGICAL ERROR (assignment instead of comparison)
        return 1;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    // MISSING RETURN STATEMENT (Warning)
}

int main()
{
    int n, i;
    int count = 0, sum = 0;

    printf("Enter number of elements: ")
    scanf("%d", n);        // RUNTIME ERROR (missing &)

    int *arr;
    arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements:\n");

    for(i = 0; i <= n; i++)   // SEGMENTATION FAULT (array overflow)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; )   // INFINITE LOOP (missing i++)
    {
        if(isPrime(arr[i]))
        {
            count++
            sum = sum + arr[i];
        }
    }

    printf("Prime count = %d\n", count);
    printf("Prime sum = %d\n", sum);

    free(arr);
    free(arr);   // DOUBLE FREE ERROR

    return 0
}
