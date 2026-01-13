/*
 * new_lines.c
 * 01/13/2026
*/

/* Counts the number of new lines */

#include <stdio.h>

int main(void)
{
    int ch, nl = 0;

    while((ch = getchar())!= EOF)
        if (ch == '\n')
            ++nl;
    printf("Number of lines: %d\n", nl);

    return 0;
}