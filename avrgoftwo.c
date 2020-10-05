/*
*Write a program using a function which calculate the sum and average of two numbers.
*Use pointers and print the values of sum and average in main().
*/
#include<stdio.h>
int SumAndAvrg(int a, int b, int *sum, float *avrg);
int main()
{
    int i, j, sum;
    float avrg;
    i = 20;
    j = 5;
    SumAndAvrg(i, j, &sum, &avrg);
    printf("The value of Sum And Average is:%d and %f\n", sum, avrg);

    return 0;
}
int SumAndAvrg(int a, int b, int *sum, float *avrg)
{
    *sum = a + b;
    *avrg = (float)(*sum / 2);
    return 0;
}