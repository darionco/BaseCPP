#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

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
    
    int favoriteNumbers[4];
    askForManyNumbers("your 4 favorite numbers", 4, favoriteNumbers);
    
    printf("Your age is: %d\n", age);
    printf("Your 4 favorite numbers are %d %d %d %d\n", favoriteNumbers[0], favoriteNumbers[1], favoriteNumbers[2], favoriteNumbers[3]);
    
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
