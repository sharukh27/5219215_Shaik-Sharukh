
#include <stdio.h>

int main() {
    char grade = 'B';
switch(grade)
{
case 'A':
printf("Excellent!\n" );
break;
case 'B' :
printf("Well done\n");
break;
case 'C' :
printf("You passed\n" );
break;
case 'F':
printf("Failed\n" );
break;
default:
printf("Invalid grade\n" );
}

    return 0;
}