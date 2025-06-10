const countVowels = (str: string) => {
    let vowels = 0;
    let split = str.split('');
    split.forEach((char) => {
        if (['a', 'e', 'i', 'o', 'u'].includes(char.toLowerCase())) {
            vowels++;
        }
    });
    return vowels;
}

const countVowels_min = (s: string) => { let v = 0; let ss = s.split(''); ss.forEach((c) => { if (['a', 'e', 'i', 'o', 'u'].includes(c.toLowerCase())) v++; }); return v; }