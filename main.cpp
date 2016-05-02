#include <stdio.h>

int addTwoIntegers(int two, int one)
{
	return one + two + one;
}

int daddyIsAwesome(int paco, int peco, int chico)
{
    int a = paco;
    int b = chico;
    int c = peco;
    
    return a + b + c;
}

int juliaIsAlsoAwesome(int dario, int selene)
{
   return dario - selene;
}

int main()
{   
    int julia, dario;
    printf("Type 2 Numbers\n");
    printf("1st Number Is: ");
    scanf("%d", &dario);
    printf("2nd Number Is: ");
    scanf("%d", &julia);
    int Result = julia + dario;
    printf("This Is Addition. It Equals To %d\n", Result);
    return 0;
}

