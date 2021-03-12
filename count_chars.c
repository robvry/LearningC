#include <stdio.h>

void main() {
    int c, bl, tb, nl;
    bl = 0;
    tb = 0;
    nl = 0;
    while((c = getchar()) != EOF) {
      if(c == ' '){
        ++bl;
      }
      if(c == '\t') {
        ++tb;
      }
      if(c == '\n'){
        ++nl;
      }
    }
    printf("%d blanks, %d tabs, %d newlines\n", bl, tb, nl);
    
}