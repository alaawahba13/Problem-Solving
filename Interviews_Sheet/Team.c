#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,count=0,arr[1000][3], res=0;
    scanf("%d", &n);
    for(int i=0; i<n ;i++){
         scanf("%d", &arr[i][0]);
         scanf("%d", &arr[i][1]);
         scanf("%d", &arr[i][2]);
       
         if((arr[i][0] +arr[i][1] + arr[i][2]) >= 2){ res++;}

    }
    printf("%d", res);
    return 0;
}