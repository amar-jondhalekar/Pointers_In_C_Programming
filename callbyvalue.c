#include<stdio.h>
int main()
{
    int a = 4, b = 7;
    printf("The value of a and b is %d and %d\n", a, b);
    printf("The value of 4+7 is %d\n", sum(a,b));
    printf("The value of a and b after function call is %d and %d\n", a, b);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    b = 2345; // The value not change because of, in call by value you cannot change the passed value.
    a = 6789;
    return c;
}