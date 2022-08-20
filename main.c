#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <iso646.h>
#define XYECOC main
#define SIZE 26

int XYECOC()
{
    char c[SIZE];
    for (int i = 0; i<SIZE; i++){

    c[i]='A'+i;

    }

    for (int i = 0; i<SIZE; i++){

    printf("    %c\b\b\b\b\b\b\b\b", c[i]);

    }
    //display(3);
    //display (i);

    return 0;
}
