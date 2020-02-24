#include <stdio.h>

/*Count the number of chars in the input*/
int main(){
    double nc;
    for(nc=0; getchar()!=EOF; ++nc);
    printf("%.0f\n", nc);
}
