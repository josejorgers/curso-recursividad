
function hanoiTowers(n, origin, auxiliar, destination){

    if (n === 1) {
        console.log(`${origin} -> ${destination}`);
        return;
    }

    hanoiTowers(n - 1, origin, destination, auxiliar);
    console.log(`${origin} -> ${destination}`);
    hanoiTowers(n - 1, auxiliar, origin, destination);
}

