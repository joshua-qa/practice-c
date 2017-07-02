#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int jo_strcmp(char *s, char *d) {
    int result = 0;
    while(*s != '\0' || *d != '\0') {
        result = *s++ - *d++;
        if(result != 0) {
            return result;
        }
    }
    return 0;
}

int main() {
    char *s = "sagiri";
    char *d = "yamada";

    int result = jo_strcmp(s, d);

    printf("%d\n", result);
}