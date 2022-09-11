function add(){
    var x=parseInt(document.getElementById('input1').value);
    var y=parseInt(document.getElementById('input2').value);
    var sum=x+y;
    document.getElementById("output").value = sum;
    // document.querySelector(document.getElementById('output')).innerHTML = sum;
}
function sub(){
    var x=parseInt(document.getElementById('input1').value);
    var y=parseInt(document.getElementById('input2').value);
    var sum=x-y;
    document.getElementById("output").value = sum;
    // document.querySelector(document.getElementById('output')).innerHTML = sum;
}
function multi(){
    var x=parseInt(document.getElementById('input1').value);
    var y=parseInt(document.getElementById('input2').value);
    var sum=x*y;
    document.getElementById("output").value = sum;
    // document.querySelector(document.getElementById('output')).innerHTML = sum;
}
function div(){
    var x=parseInt(document.getElementById('input1').value);
    var y=parseInt(document.getElementById('input2').value);
    var sum=x/y;
    document.getElementById("output").value = sum;
    // document.querySelector(document.getElementById('output')).innerHTML = sum;
}
