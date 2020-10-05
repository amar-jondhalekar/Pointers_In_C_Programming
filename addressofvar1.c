//Write a program having a variable i. Print the address of i, Pass this variable to a function and print it's address.
// Are there address same ? Why?
#include <stdio.h>
int pass(int a);
int main()
{
    int i = 5;
    printf("The value of variable i is: %d\n", i);
    printf("The address of a variable i is: %u\n", &i);
    pass(i);
    return 0;
}
int pass(int a)
{
    printf("The value of passed variable a is: %d\n", a);
    printf("The adress of passed variable a is: %u\n", &a);
}