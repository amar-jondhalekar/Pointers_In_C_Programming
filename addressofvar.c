//Write a program to print the address of a variable. Use this address to get the value of this variable.
#include<stdio.h>
int main()
{
    int a = 5;
    int *ptr;
    ptr = &a;
    printf("The address of a varibal a is %d\n", &a);
    printf("The value of the variable a is %u\n", *ptr);
    return 0;
}