const countVowels = (str) => {
    const vowels = "aeiouAEIOU";
    let count = 0;

    for (let char of str) {
        if (vowels.includes(char)) {
            count++;
        }
    }

    return count;
}

const countVowels_min = (s) => { const v = "aeiouAEIOU"; for(let c of s) { if(v.includes(c)) return ++count; } return count; }