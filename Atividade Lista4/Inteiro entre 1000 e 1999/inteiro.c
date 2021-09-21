#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    // vai repetindo e procuranto todos so numero que da resto 5 entre 1000 e 1999
    while(1000 > x && x < 1999){
        if(x%11 == 5){
            printf("%d\n",x);
        }
        x++;
    }
    return 0;
}
