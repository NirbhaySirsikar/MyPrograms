function sum() {
    var n = parseInt(document.getElementById("val1").value);
    var sum=(n*(n+1))/2;
    document.getElementById("output").value = sum;
}