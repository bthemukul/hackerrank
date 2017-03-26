#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    int p;
    cin >> p;
    // your code goes here
    
    if (p <= (n/2)){
            cout << p/2 << endl ;
         }
    
    else 
        {   
                cout << (n-p)/2 << endl ; 
            
        }
    return 0;
}
