#include<stdio.h>
int pass(int *a);
int main()
{
    int i = 5;
    printf("The value of i is: %d\n", i);
    pass(&i);
    return 0;
}
int pass(int *a)
{
    int t = *a*10;
    printf("The passed reference value is: %d\n", t);
}