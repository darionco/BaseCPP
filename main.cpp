#include <stdio.h>

int add2integers(int z, int space)
{
    return space - z;
}

int main()
{
    int programing, homework;
    printf("I am going to do Addition. Please type 2 numbers.\n");
    printf("The 1st Number Is ");
    scanf("%d", &programing);
    printf("The 2nd Number Is ");
    scanf("%d", &homework);
    int Result = programing + homework;
    printf("Your 2 Numbers Equals To %d\n", Result);
      
    int a, b, c;
    printf("I Am Also Going To Do Multiplacation. Please Type 2 Numbers\n");
    printf("The 1st Number Is ");
    scanf("%d", &a);
    printf("The 2nd Number Is ");
    scanf("%d", &b);
    c = a * b;
    printf("Your 2 Numbers Equals To %d\n", c);
   
    int p, s, o;    
    printf("I Also Want To Do Division. Please Type 2 Numbers\n");
    printf("The 1st Number Is ");
    scanf("%d", &p);
    printf("The 2nd Number Is ");
    scanf("%d", &s);
    o = p / s;
    printf("Your 2 Numbers Equals To %d\n", o);
    
    int i, h;
    printf("Finally, I Would Like To Do Subtraction. Please Type 2 Numbers\n");
    printf("The 1st Number Is ");
    scanf("%d", &i);
    printf("The 2nd Number Is ");
    scanf("%d", &h);
    Result=i-h;
    printf("Your 2 Numbers Equals To %d\n", Result);
    return 0;
}