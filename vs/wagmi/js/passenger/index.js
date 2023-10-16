let count=0;

function increment(){
    count++;
    
    document.getElementById("count-el").innerText = count;
}

function save(){
    let saved = count + "-";
    document.getElementById("save-el").innerText += saved;
    count=0 
    document.getElementById("count-el").innerText = count;
}