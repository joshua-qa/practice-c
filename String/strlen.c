#include <stdio.h>

int jo_strlen(char *s) {
    int result = 0;
    while(*s++) {
        result++;
    }
    return result;
}

int main() {
    char *s = "testasdfasdf";

    int result = jo_strlen(s);

    printf("%d", result);
}