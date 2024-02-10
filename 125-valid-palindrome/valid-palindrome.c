bool isPalindrome(char* s) {
        char cleanStr[1000000]; // Adjust the size as needed

    char *cleanStrPtr = cleanStr;
    while (*s != '\0') {
        if (isalnum(*s)) {
            *cleanStrPtr = tolower(*s);
            cleanStrPtr++;
        }
        s++;
    }
    *cleanStrPtr = '\0';

    char *left = cleanStr;
    char *right = cleanStrPtr - 1;

    while (left < right) {
        if (*left == *right) {
            left++;
            right--;
        } else {
            return false;
        }
    }

    return true;
}