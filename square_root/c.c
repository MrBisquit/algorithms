uint8_t square_root(uint8_t num) {
    uint8_t g = num / 2;

    for(uint8_t i = 0; i < 10; i++) {
        g = 0.5* (g + num / g);
    }

    return g;
}

uint8_t square_root_min(uint8_t n) { uint8_t g = n / 2; for(uint8_t i = 0; i < 10; i++) { g = 0.5 * (g + n / g); } return g; }