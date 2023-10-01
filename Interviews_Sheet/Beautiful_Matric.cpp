#include <iostream>  
#include <string>

using namespace std;

int main(){
 
   int arr[5][5],index_i=0,index_j=0;
   for(int i= 0 ;i <5; i++){
    for(int j =0 ; j<5 ;j++){
        cin >> arr[i][j];
        if(arr[i][j] == 1){
            index_i = i;
            index_j = j;
        }        
    }
   }
   int res = abs((2-index_i)) + abs((2-index_j));
   cout << res; 
    return 0 ;
}
