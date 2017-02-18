//Breaking the Records

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> score(n);
    
    for(int i = 0; i < n; i++){
       cin >> score[i];
    }
    // your code goes here
    int countmax = 0;
    int countmin = 0;
    int maxvalue = score[0];
    int minvalue = score[0];
    
     for(int i=0; i<n ; i++)
        {
            if(((i+1)<n) && (score[i+1]> maxvalue))
                {
                        countmax++;
                        maxvalue = score[i+1];
                }
         
         if(((i+1)<n) && (score[i+1] < minvalue))
                {
                        countmin++;
                        minvalue = score[i+1];
                }
        }
    
    cout << countmax << " " << countmin ;
    
    return 0;
}
