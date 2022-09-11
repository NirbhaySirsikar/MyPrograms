function palin() {
    var n = document.getElementById("val1").value;
    // var num = n.length;
    var nsplit=n.split("");
    var nrev=nsplit.reverse();
    var reverse=nrev.join("");    
    
    if (reverse == n) {
        document.getElementById("output").value = "YES";

    } else {

        document.getElementById("output").value = "NO";
    }
}