#include <stdio.h>

struct tempo{
    int horas;
    int min;
    int sec;

};

int converte(long long int segundos){
    struct tempo time;

    time.horas = segundos / 3600;
    time.min = (segundos % 3600) / 60;
    time.sec = (segundos % 3600) % 60;

    printf("%d:%d:%d\n", time.horas, time.min, time.sec);

    return 0; 
}

int main(){
    long long int S;

    scanf("%lld", &S);
    converte(S);

    return 0;
}
