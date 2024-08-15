#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
char s[10];
char sen[99];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    scanf("%c", &ch);
    scanf("%s", s);
    getchar();
    // fgets(char, 100, stdin);
    scanf("%[^\n]%*c", sen);
    printf("%c \n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);     
    return 0;
}
