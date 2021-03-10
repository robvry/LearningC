#include <stdio.h>

int main() {
    int fahr, cels, lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while(fahr <= upper) {
        /*Integer division truncates, so we can't use (5/9)*(fahr-32)*/
        cels = 5*(fahr-32) / 9;
        printf("%d\t%d\n", fahr, cels);
        fahr += step;
    }

}