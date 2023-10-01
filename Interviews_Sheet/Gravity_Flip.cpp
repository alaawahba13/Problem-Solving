#include <iostream>  
#include <string>

using namespace std;

int main(){
 
   int n, arr[100],min_index=0;
   cin >> n ;
   for(int i=0 ; i< n ; i++){
        cin >> arr[i]; 

   } 
    for(int i=0 ; i< n ; i++){
        min_index = i;
        for(int j=i+1 ; j< n ; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
    }
    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] =temp;
   } 
   for(int i=0 ; i< n ; i++){
    cout << arr[i] << " ";
   }
    return 0 ;
}
