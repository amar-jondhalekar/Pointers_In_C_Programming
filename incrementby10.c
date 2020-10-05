#include<stdio.h>
int main()
{
    int first, *p;
    printf("Enter the value: \n");
    scanf("%d", &first);
    p = &first;

    first = *p*10;
    printf("The value of first is: %d\n", first);
    return 0;
}