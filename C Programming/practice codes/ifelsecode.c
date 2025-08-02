#include <stdio.h>
int main(){
    int speed=15;
    if(speed<=10){
        printf("your driving very slowly\n");
    }
    else if (speed<=40){
        printf("your driving in the economy speed\n");
    }
    else{
        printf("your driving in the high speed\n");
    }
return 0;    
}