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
