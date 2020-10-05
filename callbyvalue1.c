//Try problem value by reference using call by value and verify that it doesn't change the value of the said variable.
#include<stdio.h>
int pass(int a);
int main()
{
    int i = 5;
    printf("The value of i is: %d\n", i);
    pass(i);
    return 0;
}
int pass(int a)
{
    int t = a*10;
    printf("The passed reference value is: %d\n", t);
}
/* Output :-
*The value of i is: 5
*The passed reference value is: 50
*/