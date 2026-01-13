/* exercise1-6.c
 * 01/13/2026
 */

 /* tests if ch=getchar() returns 0 or 1*/

 #include <stdio.h>

 int main()
 {
    printf("value of expression: %d\n", getchar()!= EOF);

    return 0;
    
 }