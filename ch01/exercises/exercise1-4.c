/* exercise 1-4.c
 * 01/11/2026
 * Write a program to print the corresponding celsius to fahrenheit table
 */

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -20; // lower limit of temperature table
    upper = 100; // upper limit
    step = 5; // step size
    celsius = lower;



    printf("celc  fahr\n");
    while(celsius <= upper){
        fahr = (celsius * 9.0/5.0) + 32;
        printf("%3.0f%6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }

}
