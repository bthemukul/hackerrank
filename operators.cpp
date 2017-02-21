

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int tipPercent , taxPercent ;
    double mealCost ,tip , tax ;
    
    cin >> mealCost >> tipPercent >> taxPercent ;
    
    tip = (mealCost * tipPercent/100) ;
    tax = (mealCost * taxPercent/100) ;
   
    int totalCost = mealCost + tip + tax ;
    
    cout << "The total meal cost is " <<totalCost << " dollars." << endl ;  
    
    return 0;
}
