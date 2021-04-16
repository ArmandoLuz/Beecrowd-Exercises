#include <stdio.h>

int main(){
	int n,maior,i;
	for(i=0;i<3;i++){
		scanf("%d",&n);
		if(n>maior){
			maior = n;
		}
	}
	printf("%d eh o maior\n",maior);
	return 0;
}
