// Circular Array Rotation

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
int n; 
int k; 
int q; 
scanf("%d %d %d",&n,&k,&q);

k=k%n;

int *a=(int*)malloc(sizeof(int)*n);

for(int a_i = 0; a_i < n; a_i++){
scanf("%d",&a[a_i]);
}

for(int a0 = 0; a0 < q; a0++){
int m; 
scanf("%d",&m);

if((m-k)<0) printf("%d\n",a[n+m-k]);
else printf("%d\n",a[m-k]);
}

return 0;
}
