#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",n);
    int *arr = (int*)malloc(n*4);
    int sum = 0;
    for (int i = 0;i<=0;i++){
        scanf("%d", arr[i]);
    }
    
    
    for(int j=0;j <= n;j++){
        sum = sum + arr[j];
        
    }
    
    printf("%d",sum);
    free(arr);
    return 0;
}

