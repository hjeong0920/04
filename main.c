#include <stdio.h>

int main(void) {
    int second;
    int min, sec;

    printf("input the second : ");
    scanf("%i", &second);

    min = second / 60;
    sec = second % 60;

    printf("the time is %i : %i\n", min, sec);

    return 0;
}