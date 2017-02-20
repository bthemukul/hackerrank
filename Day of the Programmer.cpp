#include <bits/stdc++.h>

using namespace std;

int main(){
    int y;
    cin >> y;
    // your code goes here
        int date = 0;
    
    if((y>=1700) && (y<=1917)){
        if((y%4) == 0)
            date = 12;
        else    
            date = 13;
}
       if((y>=1918) && (y<=2700)){
        if((y%4)== 0 || (y%100) == 0)
            date = 12;
        else    
            date = 13;
       }
        
    cout << date << ".09." << y ;
    
    return 0;
}
