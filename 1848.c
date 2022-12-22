#include <stdio.h>
#include <stdlib.h>

int main(){
    int count = 3, value = 0;
    char string[7];

    while(count > 0){
        fgets(string, 7, stdin);

        if(string[0] == '*'){
            value += 4;
        }

        if(string[1] == '*'){
            value += 2;
        }

        if(string[2] == '*'){
            value += 1;
        }

        if(string[0] == 'c'){
            printf("%d\n", value);
            value = 0;
            count--; 
        }

    }
    
    return 0;
}