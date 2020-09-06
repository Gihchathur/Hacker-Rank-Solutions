#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n,max=0,result;
    
    scanf("%i", &n);
    int ar[n];
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
        if (ar[ar_i]>max)
        {
            max=ar[ar_i];
            result=1;
        }
        else if (ar[ar_i]==max)
            result++;
    }

    printf("%d\n", result);
    return 0;
}