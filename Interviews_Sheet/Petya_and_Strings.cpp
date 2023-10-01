#include <iostream>  
#include <string>
#include <cstring>
using namespace std;

int main(){
 
  char str1[101], str2[101];
  int flag =0 ;
  cin >> str1;   cin >> str2;
  for(int i= 0 ; i <strlen(str1) ; i++){
    if((str1[i] <= 'Z') && (str1[i] >= 'A') ){
        str1[i] += 32;
    }
     if((str2[i] <= 'Z') && (str2[i] >= 'A') ){
        str2[i] += 32;
    }

        if(str1[i] > str2[i]){
            cout << 1 ; 
            flag= 1;
            break;
        }
         if(str1[i] < str2[i]){
            cout << -1 ; 
             flag= 1;
            break;
        }
  }
        if(!flag)
            cout << 0;

    return 0 ;
}
