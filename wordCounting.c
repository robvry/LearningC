#include <stdio.h>

#define IN 1 /*INside a word*/
#define OUT 0 /*OUTside a word*/

/*count lines, words, characters input*/

void main() {
  int c, nl, nc, nw, state;

  state = OUT;

  nl = nc = nw = 0;
  for(c = getchar(); c != EOF; c = getchar()){
    ++nc;
    if(c == '\n'){
      ++nl;
    }
    if(c == ' ' || c == '\t' || c == '\n'){
      state = OUT;
    }
    else if (state == OUT){
      state = IN;
      ++nw;
    }
  }
  printf("Characters: %d, Words: %d, Lines: %d\n", nc, nw, nl);
}

