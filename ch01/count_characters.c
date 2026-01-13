/* count_characters.c
 * 01/13/2026
 * Counts the number of inputted characters.
 */

 #include <stdio.h>

 int main(void)
 {
    long nc;

    for(nc = 0; getchar() != EOF; ++nc){
        ;
    }
    printf("Num chars: %ld\n", nc);

    return 0;
 }