 #include<stdio.h>
 int main(){
     int n;
     float pos=0,neg=0,zero=0;
     scanf("%d",&n);
     int sai[n];
     for( int k=0;k<n;k++ ) {
         scanf("%d",&sai[k]);
     }
    for( int s=0;s<n;s++) {
        if( sai[s]> 0 ) 
           pos++;
           else if( sai[s] < 0)
           neg++;
           else
           zero++;
    }
    float a , b, c;
    a = pos/n;
    b = neg/n;
    c = zero/n;
    printf("%f\n%f\n%f\n",a,b,c);
    return 0;
 }
 
