/*
Insertion sort Snippet

for(i=1; i<n;i++){
	key = a[i];
		for(j=i-1;(j>=0 && a[j]>key);){
				a[j+1] = a[j];
				j--;
			
			}
	a[j+1] = key;
				
}

*/



#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

void insertionSort(int n, int *a ) {
    
    int i, j, k, key ;

for(i=1; i<n;i++){
	key = a[i];
		for(j=i-1;(j>=0 && a[j]>key);){
				a[j+1] = a[j];
				j--;
				
			for(k=0;k<n;k++)
                  	cout<<a[k]<<" ";
             		cout<<endl;

			}
	a[j+1] = key;
				
}
	for(k=0;k<n;k++)
                  cout<<a[k]<<" ";


}

int main(void) {
    int n;
    cin>>n;
    int a[n], i;
    for(i = 0; i < n; i++) { 
        cin>>a[i]; 
    }


    insertionSort(n, a);
    return 0;
}
