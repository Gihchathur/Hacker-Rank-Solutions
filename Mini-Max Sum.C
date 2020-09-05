#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
 long x,y,z;
    z=0;
    y=0;
    x=0;
    long arr[5];
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
        z+=arr[arr_i];
        if (arr[arr_i]>y)
        {
            y=arr[arr_i];
        }

    }
    x=arr[0];
    for(int k=0;k<5;k++)
    {
        if(arr[k]<x)
        {
            x=arr[k];
        }
    }    
    printf("%ld %ld",z-y,z-x);
    
    return 0;
}
