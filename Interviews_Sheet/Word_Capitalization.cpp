#include <iostream>  
#include <string>
#include <cstring>
#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
 
  char str1[10001];
  cin >> str1; 
 
    if(str1[0] > 'Z' ){
        str1[0] -=32;
    }
          
    cout <<str1;
    return 0 ;
}
