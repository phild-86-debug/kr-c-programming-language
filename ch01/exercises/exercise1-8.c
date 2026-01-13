/* exercise1-8.c
 * 01/13/2026
 */

 #include <stdio.h>

 /* counts blanks, tabs and newlines */
 int main(void)
 {
    printf("Enter words: ");
    int ch, blanks = 0, tabs = 0, newlines = 0;
    
    while((ch = getchar()) != EOF){
        if (ch == '\n')
            ++newlines;
        else if (ch == '\t')
            ++tabs;
        else if (ch == ' ')
            ++blanks;
    }
    printf("blanks: %d  tabs: %d  newlines: %d\n", blanks, tabs, newlines);

    return 0;
 }