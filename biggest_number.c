#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b,int c, int d){
    int arr[] = {a,b,c,d};
    int max=arr[0];
    int i;
    int length=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<length;i++){
        if(max<arr[i]){
        max=arr[i];
        }
    }
    return max;
}



int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
