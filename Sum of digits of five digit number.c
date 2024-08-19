#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    
    //takeout modulo of each number
    int num1 = n%10;
    int num2 = n%100;
    int num3 = n%1000;
    int num4 = n%10000;
    int num5 = n%100000;
    //take out the numrator of the modulo after dividing it by its unit number
    int digit1 = num1/1;
    int digit2 = num2/10;
    int digit3 = num3/100;
    int digit4 = num4/1000;
    int digit5 = num5/10000;
    //takeout the sum of all the number
     
    int sum = digit1+digit2+digit3+digit4+digit5;
    //print the final output
    printf("%d",sum);
    
    return 0;
}
