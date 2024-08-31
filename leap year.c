//compound intrest

#include <stdio.h>
#include <math.h>

int main(){
    int y;
    scanf("%d",&y);
    if(y % 4 == 0 ){
        if(y%100==0||y%400==0){
            if(y%100==0&&y%400==0){
                printf("It is a leap year");
            }
            else{
                printf("Not a leap year");
            }
        }
        else{
            printf("It is a leap year");
        }
    }
    else{
        printf("It is not a leap year");
    }
    return 0;
}
