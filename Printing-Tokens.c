#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]",s);
    s = realloc(s, strlen(s) + 1);
        for( int k=0;s[k]!='\0';k++ ) {
            if( s[k] ==' ') 
              printf("\n");
              else
             printf("%c",s[k]);
            
        }
    return 0;
}
