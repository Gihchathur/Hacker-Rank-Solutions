#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,z=0;
    int k=0,l=0;
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    
    for(int x=0;x<n;x++)
    {
        k=k+a[x][x];
        l=l+a[n-x-1][x];
        
    }    
    z=abs(k-l);
    printf("%d\n",z);
    return 0;
}