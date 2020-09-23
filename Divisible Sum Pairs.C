#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int n,dev; 
    int k,result=0; 
    scanf("%i %i", &n, &k);
    int ar[n];
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    for(int x=0; x<n ; x++)
    {
        for (int y=x+1; y<n;y++)
        {
            dev=ar[x]+ar[y];
            if(dev%k==0)
            {
                result+=1;
            }
        }
    }
    

    printf("%d\n", result);
    return 0;
}
