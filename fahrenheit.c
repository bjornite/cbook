#include <stdio.h>

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%.0f\t\t%.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

