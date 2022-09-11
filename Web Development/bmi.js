function bmi(){
    var weight=parseInt(document.getElementById('input1').value);
    var height=parseFloat(document.getElementById('input2').value);
    var h=height*height;
    var ans=(weight/h);
    document.getElementById("output").value = ans;
}
