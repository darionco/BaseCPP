#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int importantmemorys(const char *hardness, int many, int *memory)
{   
    int more;
    printf("Please type %s \n", hardness);
    for (int c = 0; c <many; ++c);
    {
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

void askForManyNumbers(const char *message, int howMany, int *numbers)
{
    printf("Please type %s:\n", message);
    for (int i = 0; i < howMany; ++i)
    {
        printf("-> ");
        scanf("%d", &numbers[i]);
    }
}

void printResult(const char *type, int number)
{
    printf("Your numbers %s are equal to: %d\n", type, number);
}

int main()
{
    srand (time(NULL)); // Do not worry about this, but don't delete it
    int age = askForNumber("how many siblings you have");
    int funny = askforfarts("about how many farts you have a day");
    
    int importantmoments [3];
    importantmemorys("your age when 3 special moments happend", 3, importantmoments);
    
    int favoriteNumbers[4];
    askForManyNumbers("your 4 favorite numbers", 4, favoriteNumbers);
    
    printf("You have %d siblings\n", age);
    printf("You have about %d farts a day\n", funny);
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
    printf("From your favorite numbers, the next lucky one is: %d\n", randomFavoriteNumber);
    printf("If you play the lottery, use the number %d\n", randomFavoriteNumber * age);
    
    return 0;
}