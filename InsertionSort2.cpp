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


int main(void) 
{
    int n;
    cin>>n;
    int *A;
    A = new int[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=1;i<n;i++)
    {
        int initial = 0;
        for(int j=i-1;j>=0;j--)
            if(A[j]<A[i])
            {
                initial = j+1;
                break;
            }
            int key = A[i];
            for(int j=i-1;j>=initial;j--)
                A[j+1] = A[j];
            A[initial] = key;
        for(int j=0;j<n;j++)
            cout<<A[j]<<" ";
        cout<<endl;
    }    
   return 0;
}
