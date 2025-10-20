#include <stdio.h>
#include <math.h>

int main(){

    int x = 9;
    float y = 45;

    x = sqrt(x);
    x = pow(x, 4);
    y = round(y);
    y = ceil(y);
    y = floor(y);
    y = abs(y);   //convert positive value
    y = log(y);
    y = sin(y);
    y = cos(y);
    y = tan(y);

    printf("%d\n",x);
    printf("%f\n",y);

    return 0;
}