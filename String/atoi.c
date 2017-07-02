#include <stdio.h>
#include <stdlib.h>

int jo_atoi(char *s) {
    int result = 0;
    int minus = 1;

    while(*s != '\0' && (*s == ' ' || *s == '\t')) {
        s++;
    }

    if(*s == '+' || *s == '-') {
        minus = (*s == '-') ? -1 : 1;
        s++;
    }

    while(*s != '\0' && *s >= 48 && *s <= 57) {
        result = (result * 10) + (*s++ - 48);
    }

    return result * minus;
}

// 48~57
int main() {
    char *s = "+1234abcd";
    char *zero = "a1234";
    char *test = "-1234asdf1234";
    char *space = "   4321    1234";

    printf("jo_atoi : %d\n%d\n", jo_atoi(s), jo_atoi(zero));
    printf("%d\n%d\n", jo_atoi(test), jo_atoi(space));
    printf("atoi : %d\n%d\n", atoi(s), atoi(zero));
    printf("%d\n%d\n", atoi(test), atoi(space));

    printf( "%s = %d\n", "2007"                  , jo_atoi( "2007"                  ));
   printf( "%s = %d\n", "2007forum falinux com" , jo_atoi( "2007forum falinux com" ));
   printf( "%s = %d\n", "forum falinux com 2007", jo_atoi( "forum falinux com 2007"));
   printf( "%s = %d\n", "  2007"                , jo_atoi( "  2007"                ));
   printf( "%s = %d\n", ".,2007"                , jo_atoi( ".,2007"                ));
   printf( "%s = %d\n", "#$2007"                , jo_atoi( "#$2007"                ));
}