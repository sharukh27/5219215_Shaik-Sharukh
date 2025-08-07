#include <stdio.h>
#include "demo.h"

int main(){
    
    int a=20, b= 10,c,d,e,f,g;
    c=sum(a,b);
    d=product(a,b);
    e=division(a,b);
    f=subtract(b,a);
    g=square(a);

    printf("sum is : %d\n",c);
    printf("product is : %d\n",d);
    printf("division is : %d\n",e);
    printf("subtract is : %d\n",f);
    printf("square is : %d\n",g);
   return 0;

}