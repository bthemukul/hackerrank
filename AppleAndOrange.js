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
    var s_temp = readLine().split(' ');
    var s = parseInt(s_temp[0]);
    var t = parseInt(s_temp[1]);
    var a_temp = readLine().split(' ');
    var a = parseInt(a_temp[0]);
    var b = parseInt(a_temp[1]);
    var m_temp = readLine().split(' ');
    var m = parseInt(m_temp[0]);
    var n = parseInt(m_temp[1]);
    apple = readLine().split(' ');
    apple = apple.map(Number);
    orange = readLine().split(' ');
    orange = orange.map(Number);
    
    var appleCount = 0 , orangeCount = 0 ;
    
    for(var i=0; i<m ; i++){ if(apple[i]>0){
                                             if((apple[i]>=(s-a)) && (apple[i]<=(t-a))) {appleCount++;}
    }       
    }
    for(i=0; i<n; i++){ if(orange[i]<0){ var x=b+orange[i];    
                                             if(x>=s && x<=t){orangeCount++;}
    }       
    }

    console.log(appleCount);
    console.log(orangeCount);    
}
