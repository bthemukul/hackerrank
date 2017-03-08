

function sum(array, n){
  n||=0;
  
  if (n==0) return 0;
  else return (array[n] + sum(array, n+1));
}


var sum = function(array){
return (array.length==0 ? 0 ; array[0] + sum(array.slice[1]));
}
