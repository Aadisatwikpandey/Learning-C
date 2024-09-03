// roots of quadraic equation
#include <stdio.h>
#include <math.h>


int main(){
    float a,b,c,d;
    scanf("%f %f %f",&a,&b,&c);
    
    if(a==0){
        printf("It is not a quaratic equation");
    }
    
    d = pow(b,2)-4*a*c;
    if(d<0){
        printf("It is an Imaginary root");
    }
    else{
        
    float root1 = (-b+pow(d,1/2))/2*a;
    float root2 = (-b-pow(d,1/2))/2*a;
    
    printf("%0.3f, %0.3f",root1,root2);
    
    }
    
    return 0;
}
