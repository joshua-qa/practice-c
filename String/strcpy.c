#include <stdio.h>

void jo_strcpy(char *d, char *s) {
    while(*s != '\0') {
        *d++ = *s++;
    }
}

int main() {
    char *s = "test";
    char *d;

    jo_strcpy(d, s);

    printf("%s\n%s", d, s);
}