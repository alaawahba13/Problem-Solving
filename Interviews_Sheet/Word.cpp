#include <iostream>  
#include <string>
#include <cstring>
#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
 
  char str1[101];
  cin >> str1; 
  int lower=0, upper=0;
  for(int i= 0 ; i <strlen(str1) ; i++){
    if((str1[i] <= 'Z') && (str1[i] >= 'A') ){
        upper++;
        str1[i] +=32;
    }else{
        lower++;
    }
       
  }
    if(lower < upper){
         for(int i= 0 ; i <strlen(str1) ; i++)
             str1[i] -=32;
           
    }     
    cout <<str1;
    return 0 ;
}
