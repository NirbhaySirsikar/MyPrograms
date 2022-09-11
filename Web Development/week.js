function weekCheck(){
    var n=document.getElementById('input1').value;
    var days=["sunday","monday","tuesday","wednesday","thursday","friday","saturday"];
    let index=days.indexOf(n);
    var d=new Date();
    var day=d.getDay();

    if(index==day){
        alert("HIT");
    }else{
        alert("MISSED");
        
    }
    
}
