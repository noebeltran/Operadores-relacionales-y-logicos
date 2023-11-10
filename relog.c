#include <stdio.h>
int main (void){

    int var1 = 200;
    int var2 = 100;

    if ((var1 > var2)&&(var1 != 0))
    {
        printf("var1 es mayor que var2\n");
    }

    else 
    {
        printf("var1 no es mayor que var2");
    }

    return 0;
}