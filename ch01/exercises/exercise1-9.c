/* exercise1-9.c 
 * 01/13/2026 
 * Write a program to copy its input to its output, 
 * replacing each string of one or more blnks by a 
 * single blank.
 */

#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    int ch, blank = OUT;
    while ((ch = getchar()) != EOF){
        if (ch == ' '){
            blank = IN;
        } else {
            if (blank == IN){
                putchar(' ');
                blank = OUT;
            }
            putchar(ch);
        }
            
    
    }

    return 0;
}