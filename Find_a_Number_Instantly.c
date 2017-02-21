#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int v ;
    int n ;

    int x ;
    
    scanf("%d", &v);
    scanf("%d", &n);
    int ii ;

    for(int i=0 ; i<n; i++)
            {  scanf("%d", &ii);
             if(v==ii){
                    x = i ;
                    }
            }
    
    printf("%d", x);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
