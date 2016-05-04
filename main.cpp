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
    Result = i - h;
    printf("Your 2 Numbers Equals To %d\n", Result);
    
    printf("Hi Daddy, This Will Be My Bonus Homework!!!\n");
    int v, t, l;
    printf("For this i will write them myselfs (to make it harder)\n");
    v = 16;
    t = 80;
    l = 5;
    Result = v + t + l;
    printf("16 + 80 + 5 = %d\n", Result);
    printf("The last one was about Addition. This one will be about Division!\n");
    int k, q, z;
    k = 1;
    q = 63;
    z = 6;
    Result = q / k / z;
    printf("63 Divided by 1 Divided by 6 = %d\n", Result);
    int y, g, x;
    printf("This one is going to be Multiplacation!\n");
    y = 10;
    g = 1;
    x = 6;
    Result = 10 * 6 * 1;
    printf("10 X 6 X 1 = %d\n", Result);
    int u, j, m;
    printf("This last one will be Subtraction!\n");
    u = 50;
    j = 17;
    m = 31;
    Result = u - m - j;
    printf("50 - 31 - 17 = %d\n", Result);
    return 0;
}