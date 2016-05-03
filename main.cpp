#include <stdio.h>

int add2integers(int z, int space)
{
    return space - z;
}

int main()
{  
    int lalo = 10;
    int Julia = 6;
    int a = add2integers(Julia, lalo);
    printf("%d\n", a);
    return 0;
}
