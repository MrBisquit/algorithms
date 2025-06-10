int count_vowels(const char *str) {
    int count = 0;
    while (*str) {
        char c = *str++;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int count_vowels_min(const char *str) { int c = 0;  while(*str) { char ch = *str++; if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') c++; } return c; }