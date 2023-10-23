#include <stdio.h>
#include <conio.h>

#define MAX_PASSWORD_LENGTH 20

int main() {
    char password[MAX_PASSWORD_LENGTH + 1]; // +1 for null terminator
    char ch;
    int i = 0;

    printf("Enter your password: ");

    while (1) {
        ch = _getch(); // Read a character without echoing to the screen
        if (ch == 13) // Check if the user pressed Enter (ASCII code 13)
            break;
        else if (ch == 8) { // Check if the user pressed Backspace (ASCII code 8)
            if (i > 0) {
                i--;
                printf("\b \b"); // Erase the character from the screen
            }
        } else if (i < MAX_PASSWORD_LENGTH) {
            password[i++] = ch;
            printf("*"); // Mask the character with an asterisk
        }
    }

    password[i] = '\0'; // Null-terminate the password string

    // You can perform further actions with the password, e.g., validate it, store it, etc.
    printf("\nPassword entered: %s\n", password);

    return 0;
}
