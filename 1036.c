#include <stdio.h>
#include <math.h>

struct Rai{
    double X;
    double X2;

};

int bas(double q, double a, double z){
    double De;
    struct Rai Raizes;

    De = (a * a) - 4 * q * z;
    Raizes.X = (-a + sqrt(De)) / (2 * q);
    Raizes.X2 = (-a - sqrt(De)) / (2 * q);

    if( q == 0 || De < 0){
        printf("Impossivel calcular\n");
        
    }else{
        printf("R1 = %.5lf\n", Raizes.X);
        printf("R2 = %.5lf\n", Raizes.X2);
        
    }

    return 0;
}

int main(){
    double q,a,z;

    scanf("%lf %lf %lf",&q,&a,&z);
    bas(q,a,z);

    return 0;

}
