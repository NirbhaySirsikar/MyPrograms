function max() {
    var x = parseInt(document.getElementById("val1").value);
    var y = parseInt(document.getElementById("val2").value);
    var z = parseInt(document.getElementById("val3").value);

    // document.write(x);
    if (x >= y && x >= z) {
        document.getElementById("output").value = x;
    }
    else if (y >= x && y >= z) {
        document.getElementById("output").value = y;
    }
    else {
        document.getElementById("output").value = z;
    }

}