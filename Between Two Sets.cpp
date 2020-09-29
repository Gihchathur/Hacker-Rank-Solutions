#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n; 
    int m;
    int count=0;
    int count2=0;
    int total=0;
    scanf("%i %i", &n, &m);
    int a[n];
    int b[m];
    
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
    }
       for (int b_i = 0; b_i < m; b_i++) {
       scanf("%i",&b[b_i]);
    }
    
    for(int x=1;x<1000;x++)
    {
        count=0;
        for(int b=0;b<n;b++)
        {
          if(x%a[b]==0)
              count=count+1;
        }
        if(count==n)
        {
            count2=0;
            for(int y=0;y<m;y++)
            {
                if(b[y]%x==0)
                {
                    count2=count2+1;
                }
            }
            if(count2==m)
            {
               total=total+1;
            }
        }
        
    }



    printf("%d\n", total);
    return 0;
}
