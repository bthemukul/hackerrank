#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    double mealCost , tipPercent , taxPercent ;
    
    cin >> mealCost >> tipPercent >> taxPercent ;
    
    tipPercent = round(mealCost * tipPercent/100) ;
    taxPercent = round(mealCost * taxPercent/100) ;
   
    int totalCost = mealCost + tipPercent + taxPercent ;
    
    cout << "The total meal cost is " << totalCost << " dollars." << endl ;  
    
    return 0;
}
