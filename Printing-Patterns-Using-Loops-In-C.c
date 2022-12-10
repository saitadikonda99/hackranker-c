  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    
            for( int ch=n;ch>=1;ch-- ) {
                for( int ra=n;ra>ch;ra--) 
                  printf("%d ",ra);
                for( int s = 1 ; s<= ch*2-1;s++) {
                    printf("%d ",ch);
                }
                for( int s=ch+1;s<=n;s++)
                    printf("%d ",s);
            printf("\n");
            }
            for( int ts=1;ts<n;ts++) { 
                for( int k=n;k>ts;k--) 
                    printf("%d ",k);
                
                    for( int sai= 1 ; sai<=ts*2-1;sai++)
                       printf("%d ",ts+1);
                       for ( int c= ts+1; c<=n;c++)
                        printf("%d ",c);
                       
                    printf("\n");
            }
            
    return 0;
}
