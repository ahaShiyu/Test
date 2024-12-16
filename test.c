#include <stdio.h>
#include <string.h>

void vulnerableFunction() {
    char buffer[10];
    printf("Enter some text: ");
    gets(buffer);  // Unsafe function, allows buffer overflow
    printf("You entered: %s\n", buffer);
}

int main() {
    vulnerableFunction();
    return 0;
}
