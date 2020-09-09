#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int n; 
    scanf("%d", &n);
    int grades[n];
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
        if(grades[grades_i]>37)
        {
            if(grades[grades_i]%5==0)
                 grades[grades_i]=grades[grades_i];           
            if(grades[grades_i]%5==1)
                 grades[grades_i]=grades[grades_i]; 
            if(grades[grades_i]%5==2)
                 grades[grades_i]=grades[grades_i]; 
            if(grades[grades_i]%5==3)
                 grades[grades_i]=grades[grades_i]+2; 
            if(grades[grades_i]%5==4)
                 grades[grades_i]=grades[grades_i]+1; 
          
        }
         printf("%d\n",grades[grades_i]);
        
    }
    
    

    return 0;
}