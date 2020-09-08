#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    char* time = (char *)malloc(11 * sizeof(char));
    read(0, time, 11 * sizeof(char));
    int h = (*time - '0') * 10 + time[1] - '0';
    char *end = time + strlen(time) - 2;
    if (*end == 'P' && h != 12)
        h += 12;
    else if (*end == 'A' && h == 12)
        h = 0;
    *end = '\0';
    *time = h / 10 + '0';
    time[1] = h % 10 + '0';
    write(1, time, 8 * sizeof(char));
    return 0;
}