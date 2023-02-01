#include <stdio.h>
 
int main(){
    int N, diamond;
    char vet[1000];
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++)
    {
        scanf("%s", vet);
        diamond = 0;
        
        for(int j = 0; vet[j] != '\0'; j++)
        {
            if(vet[j] == '<')
            {
                for(int k = j; vet[k] != '\0'; k++)
                {
                    if(vet[k] == '>')
                    {
                        diamond++;
                        vet[k] = '0';
                        break;
                    }
                }
            }
        }

        printf("%d\n", diamond);
    }
    
 
    return 0;
}