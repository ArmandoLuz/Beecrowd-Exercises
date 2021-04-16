#include <stdio.h>
#include <math.h>

int main(){
    double r,t;
    scanf("%lf",&r);
    t = (4.0/3)*3.14159*pow(r,3);
    printf("VOLUME = %.3lf\n",t);
    return 0;

}
