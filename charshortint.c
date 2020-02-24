#include <stdio.h>
#include <limits.h>
#include <float.h>
/* Prints the min and max values of char, short and int */
int main()
{
        char c = 1;
        while(c + 1 >= 0)
                c = c * 2;
        printf("minchar: %d %d\n", c, CHAR_MIN);
        c = c - 1;
        printf("maxchar: %d %d\n", c, CHAR_MAX);
        short s = 1;
        while(++s >= 0)
                ;
        printf("minshort: %d %d\n", s, SHRT_MIN);
        s = s - 1;
        printf("maxshort: %d %d\n", s, SHRT_MAX);

        int i = 1;
        while(i + 1 >= 0)
                i = i * 2;
        printf("minint: %d %d\n", i, INT_MIN);
        printf("maxint: %d %d\n", i-1, INT_MAX);

        long l = 1;
        while(l+1 >= 0)
                l = l * 2;
        printf("minlong: %ld %ld\n", l, LONG_MIN);
        printf("maxlong: %ld %ld\n", l-1, LONG_MAX);
        
        printf("minfloat: %.50f\n", FLT_MIN);
        printf("maxfloat: %f\n", FLT_MAX);
}
