#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomawsomeness(int guessing, int favesomething, int number)
{
    printf("You chose something that is not 1 or 2, now i will tell you your favorite number!\nPlease type your 3 favorite numbers");
    scanf("%d", &guessing);
    scanf("%d", &favesomething);
    scanf("%d", &number);
    printf("Great! now i will predict your favorite number out of those 3 numbers");
    //THIS HAS FAILED... IT IS NIGHT... I GIVE UP... UNTILL TOMORROW!!!
    return 0;
}

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
    
    int homework;
    printf("type 1 to add 2 numbers,\n ");
    printf("type 2 to multiply 3 numbers and \n");
    printf("type any other number to see your lucky number!\n");
    scanf("%d", &homework);
    if(homework == 1)
    {   
        int awesomeness;
        int peopleROCK;
        printf("you typed 1, i am now going to add, please type 2 numbers\n");
        scanf("%d", &awesomeness);
        scanf("%d", &peopleROCK);
        printf("now, time to add!\n");
        int Result = awesomeness + peopleROCK;
        printf("%d + %d = %d\n", awesomeness, peopleROCK, Result);
    }   
    else if(homework == 2)
    {   
        int minecraft;
        int games;
        int run;
        int Result;
        printf("you typed 2, now i will multiply!\n");
        printf("please type 3 numbers(try making them small)\n");
        scanf("%d", &games);
        scanf("%d", &run);
        scanf("%d", &minecraft);
        Result = games * run * minecraft;
        printf("time to add!\n%d x %d x %d = %d", games, run, minecraft, Result);
    }
    else
    {   
        int randompersons[3];
        int randomname = randomawsomeness[rand() % 3];
        int number, favesomething, guessing;
    }
    
    return 0;
}