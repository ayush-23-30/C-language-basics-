#include <stdio.h>
#include <ctype.h>




int main() {
    char input;

    printf("Enter a character: ");
    scanf(" %c", &input);

    if (isdigit(input)) {
        printf("%c is a number.\n", input);
    } else {
        printf("%c is not a number.\n", input);
    }

    return 0;
}


