#include <stdio.h>

#define LOWER 0 /*lower limit of temparature*/
#define UPPER 300 /*upper limit of temperature*/
#define STEP 20 /*step size*/

/*fareiheight to celcious
 * formula: C = (5/9)(F-32)*/
void main(){
    float fahr, celc;
    printf("Fahr\tCelc");

    fahr = UPPER;
    while (fahr>=LOWER){
        celc = (5.9/9.0)*(fahr-32);
        printf("\n%3.0f\t%6.1f", fahr, celc);
        fahr = fahr-STEP;
    }

}
