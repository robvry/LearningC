#include <stdio.h>

int main() {
    /* int fahr, cels, lower, upper, step; */
    float fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Farenhiet to Celsius Conversion Table\n");

    while(fahr <= upper) {
        /*Integer division truncates, so we can't use (5/9)*(fahr-32); (5/9 computes to zero)*/
        //cels = 5*(fahr-32) / 9;
        cels = (5.0 / 9.0) * (fahr - 32.0);
        //printf("%3d\t%6d\n", fahr, cels);
        printf("%3.0f %6.1f\n", fahr, cels); 
        fahr += step;
    }

}