// because checking previous indexing is stuffy check the one later
int romanToInt(char* s) {
    int congregate = 0;
    for (int i = 0; i < strlen(s); i++) {
        switch (s[i]) {
            case 'I':
                if (s[i+1] == 'V') { // if next symbol is a V
                    congregate += 4; // IV
                    i++;
                } else if (s[i+1] == 'X') {
                    congregate += 9; // IX
                    i++;
                } else {
                    congregate += 1;
                }
                break;

            case 'V':
                congregate += 5;
                break;

            case 'X':
                if (s[i+1] == 'L') {
                    congregate += 40; // XL
                    i++;
                } else if (s[i+1] == 'C') {
                    congregate += 90; // XC
                    i++;
                } else {
                    congregate += 10;
                }
                break;  

            case 'L':
                congregate += 50;
                break;

            case 'C':
                if (s[i+1] == 'D') {
                    congregate += 400; // CD
                    i++;
                } else if (s[i+1] == 'M') {
                    congregate += 900; // CM
                    i++;
                } else {
                    congregate += 100;
                }
                break;

            case 'D':
                congregate += 500;
                break;
            case 'M':
                congregate += 1000;
                break;
        }
    }
    return congregate;
}