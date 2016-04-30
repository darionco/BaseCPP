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
    printf("1: ");
    scanf("%d", &dario);
    printf("2: ");
    scanf("%d", &julia);
    int Result = dario + julia;
    printf("Addition: %d\n", Result);
    return 0;
}


