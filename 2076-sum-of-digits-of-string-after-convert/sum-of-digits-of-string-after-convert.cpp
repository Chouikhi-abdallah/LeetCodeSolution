class Solution {
public:
    int getAlphabetPosition(char ch) {
        if (ch == 'A' || ch == 'a') return 1;
        else if (ch == 'B' || ch == 'b') return 2;
        else if (ch == 'C' || ch == 'c') return 3;
        else if (ch == 'D' || ch == 'd') return 4;
        else if (ch == 'E' || ch == 'e') return 5;
        else if (ch == 'F' || ch == 'f') return 6;
        else if (ch == 'G' || ch == 'g') return 7;
        else if (ch == 'H' || ch == 'h') return 8;
        else if (ch == 'I' || ch == 'i') return 9;
        else if (ch == 'J' || ch == 'j') return 10;
        else if (ch == 'K' || ch == 'k') return 11;
        else if (ch == 'L' || ch == 'l') return 12;
        else if (ch == 'M' || ch == 'm') return 13;
        else if (ch == 'N' || ch == 'n') return 14;
        else if (ch == 'O' || ch == 'o') return 15;
        else if (ch == 'P' || ch == 'p') return 16;
        else if (ch == 'Q' || ch == 'q') return 17;
        else if (ch == 'R' || ch == 'r') return 18;
        else if (ch == 'S' || ch == 's') return 19;
        else if (ch == 'T' || ch == 't') return 20;
        else if (ch == 'U' || ch == 'u') return 21;
        else if (ch == 'V' || ch == 'v') return 22;
        else if (ch == 'W' || ch == 'w') return 23;
        else if (ch == 'X' || ch == 'x') return 24;
        else if (ch == 'Y' || ch == 'y') return 25;
        else if (ch == 'Z' || ch == 'z') return 26;
        else return -1; 
    }

    int getLucky(string s, int k) {
        string x;
        for (char i : s) {
            x += to_string(getAlphabetPosition(i));
        }

        int sum = 0;
        while (k--) {
            sum = 0;  
            for (char i : x)
                sum += i - '0';
            x = to_string(sum);
        }

        return sum;
    }
};
