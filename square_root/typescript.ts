const squreRoot = (num: number): number => {
    let g = num / 2;

    for(let i = 0; i < 10; i++) {
        g = 0.5 * (g + num / g);
    }

    return g;
}

const squareRoot_min = (n: number) => { let g = n/2; for(var i = 0; i < 10; i++) { g = 0.5 * (g + n / g); } return g; }