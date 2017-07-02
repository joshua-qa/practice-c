#include <stdio.h>
#include <stdlib.h>

void jo_memset(void *s, int c, size_t n) {
    for(int i = 0; i < (int)n; i++) {
        *(int *)s++ = c;
    }
}

int main() {
    char *s;
    s = (char *)malloc(15);

    jo_memset(s, 'a', 12);
    s[12] = 'b';
    s[13] = 'c';

    printf("%s\n", s);
}