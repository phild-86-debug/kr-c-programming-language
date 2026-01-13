/* copy_char.c
 * 01/13/2026
*/

#include <stdio.h>

/* copy input to output; 2nd version */
int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
    
    return 0;
}