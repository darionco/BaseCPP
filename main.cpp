#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int importantmemorys(const char *hardness, int many, int *memory)
{   
    int more;
    printf("Please type %s \n", hardness); //NOT WORKING... AT ALL!!!
    {   
        for (int i = 0; i < many; ++i)
        printf("-> ");
        scanf("%d", &more);
    }
    return more;
}

char askforfarts(const char *fart)
{   
    int mare;
    printf("please type %s:\n", fart);
    printf("-> ");
    scanf("%d", &mare);
    return mare;
}

int askForNumber(const char *message)
{
    int number;
    printf("Please type %s:\n", message);
    printf("-> ");
    scanf("%d", &number);
    return number;
}

int askForManyNumbers(const char *message, int howMany, int *numbers)
{
    printf("Please type %s:\n", message);
    for (int i = 0; i < howMany; ++i)
    {
        printf("-> ");
        scanf("%d", &numbers[i]);
    }
}

int printResult(const char *type, int number)
{

     printf("Your numbers %s are equal to: %d\n", type, number);
}

int main()
{
    srand (time(NULL)); // Do not worry about this, but don't delete it
    int age = askForNumber("how many siblings you have");
    int funny = askforfarts("about how many farts you have a day");
        
    int favoriteNumbers[4];
    askForManyNumbers("your 4 favorite numbers", 4, favoriteNumbers);
    
    int importantmoments[3];
    importantmemorys("3 ages of an important time in your life", 3, importantmoments);
    
    printf("You have %d siblings\n", age);
    printf("Your age when 3 special moments happend is %d, %d and %d\n", importantmoments[0], importantmoments[1], importantmoments[2]);
    printf("Your 4 favorite numbers are %d, %d, %d and %d\n", favoriteNumbers[0], favoriteNumbers[1], favoriteNumbers[2], favoriteNumbers[3]);
    
    int added = favoriteNumbers[0] + favoriteNumbers[1] + favoriteNumbers[2] + favoriteNumbers[3];
    int substracted = favoriteNumbers[0] - favoriteNumbers[1] - favoriteNumbers[2] - favoriteNumbers[3];
    int multiplied = favoriteNumbers[0] * favoriteNumbers[1] * favoriteNumbers[2] * favoriteNumbers[3];
    int divided = favoriteNumbers[0] / favoriteNumbers[1] / favoriteNumbers[2] / favoriteNumbers[3];
    
    printResult("added", added);
    printResult("substracted", substracted);
    printResult("multiplied", multiplied);
    printResult("divided", divided);
    
    int randomFavoriteNumber = favoriteNumbers[rand() % 4];
    printf("(This is really funny, don't really do any of these, they are just for fun!)\nFrom your favorite numbers, the next lucky one is: %d\n", randomFavoriteNumber);
    printf("If you play the lottery, use the number %d\n", randomFavoriteNumber * age);
    printf("If your friends ask you to pick a number in between 1 and 1000, use %d\n", randomFavoriteNumber * added);
    printf("If your playing man hunt and your friend is playing eechi peachi, they pick you, count clock-wise around everyone this many times, %d\n", randomFavoriteNumber + multiplied);
    printf("if you need to tell someone in 20 years, how old will you be, say your %d!\n", randomFavoriteNumber + substracted);
    
    return 0;
}