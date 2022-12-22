#include <stdio.h>
#include <stdlib.h>

int main(){
    int numberCourses;
    char courses[100];

    scanf("%d", &numberCourses);

    for(int i = 0; i < numberCourses; i++){
        scanf("%s", courses);
    }

    printf("Ciencia da Computacao\n");

    return 0;
}