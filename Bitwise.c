 #include<stdio.h>
 int bitwise( int , int );
int main() {
int n,k;
scanf("%d %d",&n,&k); 
bitwise( n ,k );
return 0;
}

int bitwise( int n , int k ) {

int a=0,b=0,c=0;
for(int s=1;s<=n;s++) {

for(int k1=s+1;k1<=n;k1++) {
if((s&k1)>a && (s&k1)<k) 
a=s&k1;
if((s|k1)>b && (s|k1)<k)
b=s|k1 ;
if((s^k1)>c && (s^k1)<k)
c=s^k1;
}
}

printf("%d\n%d\n%d",a, b,c); 
return 0;
}

