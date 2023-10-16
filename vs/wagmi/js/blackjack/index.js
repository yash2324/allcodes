let cards=[];
let sum=0;
let hasBlackJack = false
let isAlive = false
let message = ""
let player = {
    name: "YG",
    chips: 500
}
let messageEl = document.getElementById("message-el")
let sumEl = document.getElementById("sum-el")

let cardsEl = document.getElementById("cards-el")
let playerEl = document.getElementById("player-el")

playerEl.textContent = player.name + ": $" + player.chips

function getRandomCard(){
   let randomNumber= Math.floor((Math.random()*13)+1)
   if(randomNumber>10){
    return 10;
   }else if(randomNumber===1){
    return 11;
   }else{
    return randomNumber;
   }
   
}

function startGame(){
    let firstCard = getRandomCard();
    let secondCard = getRandomCard();
    cards=[firstCard,secondCard]
    sum= cards[0] + cards[1]
    renderGame()
}
function renderGame(){
    sumEl.textContent = "Sum : " +sum;
    cardsEl.textContent ="Cards : "
    for (let i = 0; i < cards.length; i++) {
        cardsEl.textContent += cards[i] + " "
        }
    if (sum < 21) {
        message ="Do you want to draw a new card? 🙂"
        isAlive=true
    } else if (sum === 21) {
        message = "Wohoo! You've got Blackjack! 🥳"
        hasBlackJack = true
        
    } else{
        message ="You're out of the game! 😭"
        isAlive = false
    }
    
    messageEl.textContent = message;
}
function newCard(){
    if(isAlive === true && hasBlackJack === false){
        console.log("Draw a new card")
        let newcard = getRandomCard();
        sum += newcard;
        cards.push(newcard);
        renderGame();
    }
    
}
