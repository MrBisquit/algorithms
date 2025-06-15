float square_root(float num) {
    float g = num / 2;

    for(float i = 0; i < 10; i++) {
        g = 0.5* (g + num / g);
    }

    return g;
}

float square_root_min(float n) { float g = n / 2; for(float i = 0; i < 10; i++) { g = 0.5 * (g + n / g); } return g; }