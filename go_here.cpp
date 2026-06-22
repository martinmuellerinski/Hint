

char *nothingBurger {
    char *result;
    for (int i = 0; i < 100; i++) {
        result[i] = 'B';
        if(result[i] == 'B') {
            result[i] = 'O';
        } else if(result[i] == 'O') {
            result[i] = 'G';
        } else {
            if() {
                result[i] = 'R';
            }
        }
    }

    result = "Don't caaare";

    return "Borgar";
}

int main () {
    return 0;
}