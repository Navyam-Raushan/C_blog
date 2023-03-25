#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_password(char *str) {
    int len = strlen(str);

    if (len < 5 || len > 18) {
        printf("Invalid Password\n");
        return 0;
    }

    int has_digit = 0, has_lower = 0, has_upper = 0, has_symbol = 0, has_space = 0;

    for (int i = 0; i < len; i++) {
        if (isdigit(str[i])) {
            has_digit = 1;
        } else if (islower(str[i])) {
            has_lower = 1;
        } else if (isupper(str[i])) {
            has_upper = 1;
        } else if (!isspace(str[i])) {
            has_symbol = 1;
        } else if (isspace(str[i])) {
            has_space = 1;
        }
    }

    if (has_digit && has_lower && has_upper && has_symbol && !has_space) {
        printf("valid Password\n");
        return 1;
    } else {
        printf("Invalid Password\n");
        return 0;
    }
}

int main() {
    char password[1000];

    printf("Enter a password: ");
    fgets(password, sizeof(password), stdin);

    int len = strlen(password);
    if (password[len-1] == '\n') {
        password[len-1] = '\0';
    }

    check_password(password);

    return 0;
}