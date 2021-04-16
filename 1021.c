#include <stdio.h>

int main(){
	double n, valor, moedas;
	int a, b, c, d, e, f, g, h, i, j;
	int cem, cinq, vin, dez, cinc, dois, um, m_cinq, m_vin, m_dez, m_cinc, m_um;
	
	scanf("%lf",&n);
	
	valor = n;
	cem = n/100;
	a = (int)n%100;
	cinq = a/50;
	b = (int)a%50;
	vin = b/20;
	c = (int)b%20;
	dez = c/10;
	d = (int)c%10;
	cinc = d/5;
	e = (int)d%5;
	dois = e/2;
	um = (int)e%2;
	
	moedas = valor*100;
	f = (int)moedas;
	g = f%100;
	m_cinq = g/50;
	h = g%50;
	m_vin = h/25;
	i = h%25;
	m_dez = i/10;
	j = i%10;
	m_cinc = j/5;
	m_um = j%5;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",cem);
	printf("%d nota(s) de R$ 50.00\n",cinq);
	printf("%d nota(s) de R$ 20.00\n",vin);
	printf("%d nota(s) de R$ 10.00\n",dez);
	printf("%d nota(s) de R$ 5.00\n",cinc);
	printf("%d nota(s) de R$ 2.00\n",dois);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",um);
	printf("%d moeda(s) de R$ 0.50\n",m_cinq);
	printf("%d moeda(s) de R$ 0.25\n",m_vin);
	printf("%d moeda(s) de R$ 0.10\n",m_dez);
	printf("%d moeda(s) de R$ 0.05\n",m_cinc);
	printf("%d moeda(s) de R$ 0.01\n",m_um);
	
	return 0;
}
