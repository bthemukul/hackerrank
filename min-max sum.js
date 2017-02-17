// Min - Max Sum

var input_stdin_array = "";
var input_currentline = 0;

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////


        function bubbleSort(arr){
   var len = arr.length;
   for (var i = len-1; i>=0; i--){
     for(var j = 1; j<=i; j++){
       if(arr[j-1]>arr[j]){
           var temp = arr[j-1];
           arr[j-1] = arr[j];
           arr[j] = temp;
        }
     }
   }
   return arr;
}


function main() {
    var a_temp = readLine().split(' ');
    var a = parseInt(a_temp[0]);
    var b = parseInt(a_temp[1]);
    var c = parseInt(a_temp[2]);
    var d = parseInt(a_temp[3]);
    var e = parseInt(a_temp[4]);
    
    var arr = [a,b,c,d,e];
    var length = arr.length;
    var brr = [];
    

    
    brr = bubbleSort(arr);

    var min =0, max = 0 ;
    
    for(var i=1; i<length ; i++ ){
            max = max + brr[i];
        }
    for( i=0; i<(length-1) ; i++ ){
            min = min + brr[i];
        }
    
    console.log(min+" "+max);

}
