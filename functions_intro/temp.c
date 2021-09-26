#include <stdio.h>

//faraheint to celcius
float temp(float *fahr);

/*fareiheight to celcious
 * formula: C = (5/9)(F-32)*/
int main(){
    float h;
    h = 300;
    printf(" %f deg. Celsius\n",temp(&h));
}

float temp(float *fahr){
    float celcius, tem;
    printf("Temperature in Fahrenheit is: %f \n Converting to Celsius in 3..2..1..\n",*fahr);
    celcius = ((5.0/9.0)*(*fahr-32));
    return celcius;
}