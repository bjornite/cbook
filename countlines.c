#include <stdio.h>

int main() {
    float lc = 0;
    int c;
    while((c = getchar()) != EOF){
        if (c == '\n') ++lc;
    }
    printf("%0.f\n", lc);
}
