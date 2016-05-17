#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{
    // if (condition) {}
    // for (initial; condition; increment) {}
    
    int a = 5; // we are making a hold a number value
    if (a < 5) // if a (which is equal to a number) is smaller than 5 then do the things in the following scope:
    {
        printf("a is smaller than five!\n"); // print ... blah!
    }
    else if (a == 5) // else if a is not smaller than five but it is equal to five do the things in the following scope:
    {
        printf("a is equal to five!\n"); // print... blah!
    }
    else // else if a is not smaller than five and is not equal to five, do the things in the following scope:
    {
        printf("a is larger than five!\n"); // print... blah!
    }
    
    
    if (a > 3 && a < 6) // if a is bigger than 3 and (&& <-- that's how you say "and" in programming) a is less than 6 do the things in the following scope:
    {
        printf("a is between 3 and 6!\n"); // print... blah!
    }
    else if (a >= 10) // if a is not more than 3 and it is not smaller than six but it is more than or equal to 10, do the things in the following scope:
    {
        printf("a has more than one digit!\n"); // print... blah!
    }
    else // anything else, just do the things in the following scope:
    {
        printf("a is boring...\n"); // print... blah!
    }
    
    
    if (a == 6 || a == 3 || a == 9) // if a is equal to six or (|| <-- that's how you write "or" in programming) is equal to 3 or it is equal to 9, do the things in the following scope:
    {
        printf("a is a multplie of 3!\n"); // print... blah!
    }
    else if (a != 5) // otherwise, if a is not (! <-- that's how you write "not" in programming) equal to five, do the things in the following scope:
    {
        printf("a is not equal to five!\n"); // print... blah!
    }
    else if (a == 10) // otherwise, if a is equal to 10, do the things in the following scope:
    {
        printf("wow a, wow...\n"); // print... blah!
    }
    
    if (!(a > 5 && a == 10)) // if not condition = if (!(condition))
    {
        printf("a is not more than five and is not equal to ten!\n");
    }
    
    bool condition = (a == 5); // bool = boolean can be true or false
    if (condition)
    {
        printf("a is equal to five!\n");
    }
    
    bool dario = true;
    bool selene = false;
    bool isCool = true;
    if (dario == isCool)
    {
        printf("Dario is super cool!\n");
    }
    else
    {
        printf("Dario is not cool!\n");
    }
    
    if (selene == isCool)
    {
        printf("Selene is super cool!\n");
    }
    else
    {
        printf("Selene is not cool, Dario is in trouble :(\n");
    }
    
    
    int asking_forNumber;
    printf(" Type 1 to add 2 numbers\n");
    printf("type 2 to Multiply 3 numbers\n");
    printf("Type any other number to see your  lucky number\n");
    scanf("%d", &asking_forNumber);
    
    if ( asking_forNumber == 1)
    {
        int add;
        int add2;
        printf("Choose 2 numbers\n");
        printf(" first number: ");
        scanf("%d", &add);
        printf(" second number: ");
        scanf("%d", &add2);
        int addingResult = add + add2;
        printf(" %d + %d = %d\n", add, add2, addingResult);
        
    }
    
    else if ( asking_forNumber == 2)
    {
        int multiply;
        int multiply2;
        int multiply3;
        printf(" you chose 2. Type three numbers\n");
    }
    
    
    return 0;
}