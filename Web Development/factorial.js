function factorial() {
    var x = parseInt(document.getElementById("val1").value);
    var fact =1;
    for (let index = 2; index <= x; index++) {
        fact*=index;
    }
    document.getElementById("output").value = fact;
}