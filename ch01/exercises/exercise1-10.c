/* exercise1-10.c
 * 01/18/2026
 * write a program to copy its input to its output, replacing each
 * tab by /t, each backspace by \b and each backslash by \\.
 */

 #include <stdio.h>

 int main(void)
 {
    char ch;
    while((ch = getchar())!= EOF){
        if (ch == '\t') {
            putchar('\\');
            putchar('t');
        } else if (ch == '\b') {
            putchar('\\');
            putchar('b');
        } else if (ch == '\\') {
            putchar ('\\');
            putchar ('\\');
        } else
            putchar(ch);    
    }
    printf("\n");

    return 0;
 }