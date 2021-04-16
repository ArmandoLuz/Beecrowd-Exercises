#include <stdio.h>
#include <math.h>

struct ponto{
	double x1, x2;
	double y1, y2;
};

void distancia(double x1, double x2, double y1, double y2){
	double D_E;
	int i;
	
	D_E = sqrt((x2 - x1)*(x2 - x1) + ((y2 - y1)*(y2 - y1)));
	printf("%.4lf\n", D_E);

}

int main(){
	
	struct ponto P;
	scanf("%lf %lf", &P.x1, &P.y1);
	scanf("%lf %lf", &P.x2, &P.y2);
	distancia(P.x1, P.x2, P.y1, P.y2);
	return 0;
}
