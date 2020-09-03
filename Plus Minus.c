#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    float a,b,c,x=0,y=0,z=0;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
       if(arr[arr_i]>0)
           x+=1;
        else if(arr[arr_i]==0)
           y+=1;
        else
           z+=1;

        
    }
    a=x/n;
    b=z/n;
    c=y/n;
    printf("%f\n%f\n%f\n",a,b,c);
    
    return 0;
}
