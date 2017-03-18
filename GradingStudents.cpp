#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        int grade;
        cin >> grade;
        
              if (grade>=38){
                    int y ;
                    y = (((grade/5)+1)*5);
                  
                  if ((y-grade)<3){
                      cout << y << "\n" ;}
                  
                    else cout << grade << "\n" ;
                
                }
        else if (grade < 38) cout << grade << "\n" ;            
        
        
    }
}
