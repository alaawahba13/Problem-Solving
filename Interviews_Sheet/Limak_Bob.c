#include <stdio.h>
#include <stdlib.h>

int main(){
    int Limak,Bob,count=0;
    scanf("%d %d", &Limak, &Bob);
    while(Limak <= Bob){
        Limak *= 3;
        Bob *= 2;
        count++;
    }
    printf("%d",count);
    return 0;
}