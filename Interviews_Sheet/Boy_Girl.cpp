#include <iostream>  
#include <string>

using namespace std;

int main(){
 
    string s ;
    cin >> s ;
    int  count=0;
    for(int i=97;i <=123; i++){
       for(int j=0 ;j <s.length(); j++){
            if(s[j] == (char)i){
                 count ++ ; 
                 break;
            }
            
         }  

    }
    if( count %2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0 ;
}