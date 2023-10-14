const playerText= document.getElementById("playerText");
const computerText= document.getElementById("computerText");
const resultText= document.getElementById("resultText");
const choices = document.getElementsByClassName("choiceBtn");
let player;
let computer;
let result;

for (let i = 0; i < choices.length; i++) {
    choices[i].addEventListener("click", function () {
        player = choices[i].textContent;
        computerTurn();
        playerText.textContent = `Player: ${player}`;
        computerText.textContent = `Computer: ${computer}`;
        resultText.textContent = rresult();
    });
}
    

function computerTurn(){
    const randNum = Math.floor(Math.random*3)+1;
    switch (randNum){
        case 1:
            computer = "ROCK";
            break;

        case 2:
            computer = "PAPER";
            break;
        case 3:
            computer = "SCISSORS";
            break;
    }
}
function rresult(){
    if(player == computer){
        return "Draw!";
    }
    else if(computer == "ROCK"){
        if(player=="PAPER"){
            return "You Won!";
        }
        else{
            return "You lost!";
        }
    }
    else if(computer == "PAPER"){
        if(player=="SCISSORS"){
            return "You Won!";
        }
        else{
            return "You lost!";
        }
    }
    else if(computer == "SCISSORS"){
        if(player=="ROCK"){
            return "You Won!";
        }
        else{
            return "You lost!";
        }
    }
}