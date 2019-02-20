#include <stdio.h>

int main(){
    printf("Hello World!");
    printf("Hello\n World!");  //new line
    printf("Hello\\n World!"); //add \ to print preseve symbol \n

    int a, b;
    printf("please give value for a.");
    scanf("%d",&a);
    printf("please give value for b.");
    scanf("%d",&b);
    printf("a=%d,b=%d",&a,&b);

    return 0;
}




