//compound intrest

#include <stdio.h>
#include <math.h>

int main(){
    int p,n,t;
    int r = 12;
    scanf("%d %d %d",&p,&n,&t);
    int a = pow(1+(r/n),n*t);
    int c = a*p;
    printf("%d",c);
    return 0;
   
}
