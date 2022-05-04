#include <stdio.h>

void celsius(float c){
    float k, f;
    f = (c * 1.8) + 32;
    k = c + 273;
    printf("\n");
    printf("Fahrenheit: %.1f°\n", f);
    printf("Kelvin: %.1f°\n", k);
    printf("\n");
}

void fahrenheit(float f){
    float c, k;
    c = (f - 32)/1.8;
    k = ((f - 32)/1.8) + 273.15;
    printf("\n");
    printf("Celsius: %1.f°\n", c);
    printf("Kelvin: %.1f°\n", k);
    printf("\n");
}

void kelvin(float k){
    float c, f;
    c = k - 273;
    f = ((k - 273) * 1.8) + 32;
    printf("\n");
    printf("Celsius: %1.f°\n", c);
    printf("Fahrenheit: %.1f°\n", f);
    printf("\n");
}