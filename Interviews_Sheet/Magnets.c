#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, count=0;  
    int arr[100000]; 
    scanf("%d", &n);
    for(int i= 0 ; i < n ; i++){
         scanf("%d", &arr[i]);
    }
     for(int i= 0 ; i < n ; i++){
         if( (arr[i] > arr[i+1]  )|| ( arr[i] < arr[i+1]  ))
            count++;            
    }
    printf("%d", count);
    return 0;
}