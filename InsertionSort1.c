//  https://www.hackerrank.com/challenges/insertionsort1/problem

 #include<stdio.h>
        int InsertionSort( int[], int );
        int InsertionSort( int arr[], int n ) {
                // for loop
                for( int k=1; k<n; k++ ) {
                        int temp = arr[k];
                        int s = k-1;
                // sort the array using while loop
                
                while( s>=0 && arr[s] > temp ) {
                        arr[s+1] =  arr[s];
                        s--;
                for( int k=0; k<n; k++ ) {
                        printf("%d ",arr[k]);
                        }
                        printf("\n");
                       
                }
                        arr[s+1] = temp;
                }
                                    
                for( int k=0; k<n; k++ ) {
                        printf("%d ",arr[k]);
                        }
                        printf("\n");
                       
                      
                return 0;
                
                }

int main() {
        int size,k=0;
        
        scanf("%d",&size);
        int arr[size];
        // input the array using while loop
while( k < size ) {
         scanf("%d",&arr[k] );
        k++;
        }
        InsertionSort( arr, size );
        return 0;
        }

