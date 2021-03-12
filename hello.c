#include <stdio.h>

void main() {
    
    printf("Hello, world!\n");
    /* printf("Here we are!\nCan I do this?\t Why not?\n"); */

    int c;

    printf("%d\n", c = (getchar() != EOF));
    printf("%d", EOF);
    while((c = getchar()) != EOF) {
      putchar(c);
    }
    
}