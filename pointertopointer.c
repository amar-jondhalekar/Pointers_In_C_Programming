#include<stdio.h>
int main()
{
    int i = 23;
    int *ptr;
    int **ptr_ptr;
    ptr = &i;
    ptr_ptr = &ptr;
    printf("The value of is is: %d\n", **ptr_ptr);
    return 0;
}