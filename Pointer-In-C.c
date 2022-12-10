#include <stdio.h>
#include<math.h>
void update(int *a,int *b) {
    int result = *a+*b;
    int result2 = abs( *a-*b );
    printf("%d\n%d\n",result,result2);
    

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);


    return 0;
}
