#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, h,w=0;
    int arr[1000]; 
    scanf("%d %d", &n, &h);
    for(int i= 0 ; i < n ; i++)
         scanf("%d", &arr[i]);

      for(int i= 0 ; i < n ; i++){
        if(arr[i] > h){
            w +=2;
        }else{
            w +=1;
        }
      }
    printf("%d", w);  
    return 0;
}