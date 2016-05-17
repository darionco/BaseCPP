#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int moment_Age( int baby, int young, int adult )
{
    printf ("how old were you in the last 3 important moments?\n");
    printf (" first number: ");
    scanf ("%d", &baby);
    printf (" second number: ");
    scanf ("%d", &young);
    printf (" third number: ");
    scanf ("%d", &adult);
    printf (" you were %d, %d, and %d in the last 3 important moments\n", baby, young, adult);
}

int sibblings( int sis )
{
    printf (" How many siblings do you have?\n -> ");
    scanf ("%d", &sis);
    printf (" you have %d siblings\n", sis );
}

int farts_a_day( int farting )
{
    printf ("How many times do you fart in a day?\n-> ");
    scanf ("%d", &farting);
   printf (" This is how many times you fart in a day %d\n", farting );
}


int askForNumber(const char *message)
{
    int number;
    printf("Please type your %s:\n", message);
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
    int age = askForNumber("age");
    
    
    int farting;
    int farts;
    farts_a_day( farts );
    
    int sis;
    int bro;
    sibblings( bro );
    
    int baby;
    int young;
    int adult;
    moment_Age( baby, young, adult );
        
    int favoriteNumbers[4];
    askForManyNumbers("your 4 favorite numbers", 4, favoriteNumbers );
    
    printf("Your age is: %d\n", age);
    printf("Your 4 favorite numbers are %d %d %d %d\n", favoriteNumbers[0], favoriteNumbers[1], favoriteNumbers[2], favoriteNumbers[3]);
    
    int added = favoriteNumbers[0] + favoriteNumbers[1] + favoriteNumbers[2] + favoriteNumbers[3];
    int substracted = favoriteNumbers[0] - favoriteNumbers[1] - favoriteNumbers[2] - favoriteNumbers[3];
    int multiplied = favoriteNumbers[0] * favoriteNumbers[1] * favoriteNumbers[2] * favoriteNumbers[3];
    int divided = favoriteNumbers[0] / favoriteNumbers[1] / favoriteNumbers[2] / favoriteNumbers[3];
    int multipliedAndAdded = favoriteNumbers[0] * favoriteNumbers[2] * favoriteNumbers[3] + favoriteNumbers[1];
    
    printResult("added", added);
    printResult("substracted", substracted);
    printResult("multiplied", multiplied);
    printResult("divided", divided);
    printResult(" multiplied and added", multipliedAndAdded);
    
    int randomFavoriteNumber = favoriteNumbers[rand() % 4];
    printf("From your favorite numbers, the next lucky one is: %d\n", randomFavoriteNumber);
    printf("If you play the lottery, use the number %d\n", randomFavoriteNumber * age);
    printf ("I will guess the favourite number you prefer the most out of your four favourite numbers: %d\n", randomFavoriteNumber);
    
    return 0;
}
