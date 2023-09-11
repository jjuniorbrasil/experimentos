let flipcard = document.querySelector(".main");

let card = document.querySelector(".card");
let background = document.querySelector("body");
let front = document.querySelector(".front");

function flippar() {
    if (card.className == "card flipf") {
        card.className = "card fixboxshadow flipb";
        background.style.backgroundColor = "#94d887";
    } else {
        card.className = "card flipf";
        background.style.backgroundColor = "#35212f";
    }
}

flipcard.addEventListener('click', flippar);