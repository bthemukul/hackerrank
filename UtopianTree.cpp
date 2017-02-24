#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int h = 1;
        
         for(int j=0; j<n; j++){
            if(j % 2 == 0) 
                h = h * 2 ;
            else(++h);
                       }
          cout<< h << endl;
        }
    return 0;
}
