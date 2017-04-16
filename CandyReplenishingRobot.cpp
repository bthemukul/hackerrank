/*Week 30 Code Competition 
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> c(t);
    for(int i = 0; i < t; i++){
       cin >> c[i];
    }
    // your code goes here
    
    int m , count = 0;
    int x = n ;
    
    for (int i = 0; i< (t-1); i++ ){
        
        x= x- c[i] ;
        if(x<5){
            m = n-x;
            x+=m;
            count +=m;
            
        }
        
    }
    cout << count << endl ;
    return 0;
}
