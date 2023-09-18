#include <iostream>  
#include <string>

using namespace std;

int main(){
    int n ,Anton =0 ,Danik =0 ; 
    string s ;
    scanf("%d", &n);
    cin >> s ;
    for(int i =0 ; i < n ; i++){
        if(s[i] == 'A') Anton ++ ;
        else if(s[i] == 'D') Danik++;
    }
    if(Anton > Danik) cout << "Anton";
    else if(Anton < Danik) cout << "Danik";
    else cout << "Friendship";
    return 0 ;
}