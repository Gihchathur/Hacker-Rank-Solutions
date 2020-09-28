#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int x1; 
    int v1; 
    int x2; 
    int v2;
    int k=0;
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);

    if(v1>v2)
    {
        if(x1>x2)
        {
            printf("NO");
        }
        else
            for(int a=0;a<10000;a++)
            {
                if(a*v1-a*v2==x2-x1)
                      k+=1;
            }
        if(k>=1)
            printf("YES");
        else
            printf("NO");
    }
    if (v1==v2)
    {
        if(x1==x2)
        {
           printf("YES");
        }
        else 
        {
          printf("NO");
        }
    }
    if (v1<v2)
    {
        if(x1<x2)
        {
          printf("NO");
        }
        else
            
        { k=0;
         for(int a=0;a<10000;a++)
          {
             if(a*v2-a*v1==x1-x2)
                     k+=1;
          }
       if(k>=1)
            printf("YES");
        else
            printf("NO");
        }
    }
    

    return 0;
}
