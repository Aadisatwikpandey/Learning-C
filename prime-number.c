#include <stdio.h>
// Whether the number is prime or not.


int main(){
    int n;
    scanf("%d",&n);
    int r=0;
    
    for (int i=2;i<=n/2;i++){
        int c=n%i;
        if(c==0){
            printf("Not a prime number");
            r=i;
            break;
        }
    }
    if(r==0){
        printf("prime");
    }
    return 0 ;
}

    
