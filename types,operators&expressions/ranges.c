#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
//Write a program to determine the ranges of char , short , int , and long
//        variables, both signed and unsigned , by printing appropriate values from standard headers
//        and by direct computation. Harder if you compute them: determine the ranges of the various
//floating-point types.

int main(int argc, char** argv){

    printf("CHAR_BIT : %d\n", CHAR_BIT);
    printf("CHAR_MAX : %d\n", CHAR_MAX);
    printf("CHAR_MIN : %d\n", CHAR_MIN);
    printf("INT_MAX : %d\n", INT_MAX);
    printf("INT_MIN : %d\n", INT_MIN);
    printf("LONG_MAX : %ld\n", LONG_MAX);
    printf("LONG_MIN : %ld\n", LONG_MIN);
    printf("SHORT_CHAR_MAX : %d\n", SCHAR_MAX);
    printf("SHORT_CHAR_MIN : %d\n", SCHAR_MIN);
    printf("SHORT_MAX : %d\n", SHRT_MAX);
    printf("SHORT_MIN : %d\n\n", SHRT_MIN);

    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLOAT_MAX : %g\n", (float) FLT_MAX);
    printf("FLOAT_MIN : %g\n", (float) FLT_MIN);
    printf("-FLOAT_MAX : %g\n", (float) -FLT_MAX);
    printf("-FLOAT_MIN : %g\n", (float) -FLT_MIN);
    printf("DOUBLE_MAX : %g\n", (double) DBL_MAX);
    printf("DOUBLE_MIN : %g\n", (double) DBL_MIN);
    printf("-DOUBLE_MAX : %g\n", (double) -DBL_MAX);
    printf("-DOUBLE_MIN : %g\n", (double) -DBL_MIN);

    printf("Precision value : %d\n", FLT_DIG);

}
