process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();    
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////

function main() {
    h = readLine().split(' ');
    h = h.map(Number);
    var word = readLine();
      
    var m = word.length ;
    var k = h[0];
    
    for(i=0; i<m;i++){
            if((h[i+1]>h[i]) && (i+1)<m)
                { k=h[i+1];
                }
}
    var g = k*1*m;
    
   console.log(g);   
    
    

}




//Correct Working Code
/*
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
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
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int mh ;
    
        //for each letter in the given word
    for (int i=0; i < word.length(); i++){
        int temp = (word[i] - 'a'); 
        if (h[temp] > mh){ //we check it's height
            mh = h[temp]; //we keep the highest one
        }
    }
    
    long int sum = word.length() * mh ;
    cout << sum << endl;
    
    return 0;
}

*/
