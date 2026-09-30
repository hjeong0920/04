#include <stdio.h>

int main(void) {
    int second;
    int hour, min, sec;

    printf("input the second : ");
    scanf("%i", &second);

    hour = second / 3600;
    min = (second % 3600) / 60;
    sec = second % 60;

    printf("The time for %i second is %i : %i : %i\n", second, hour, min, sec);

    return 0;
}