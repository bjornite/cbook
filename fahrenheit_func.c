#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

double celsius_from_fahr(int fahr);

int main()
{
        for(int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
                printf("%d\t%6.2f\n", fahr, celsius_from_fahr(fahr));
}

double celsius_from_fahr(int fahr)
{
        return((5.0 / 9.0) * fahr - 32);
}
