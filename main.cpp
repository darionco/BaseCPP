#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    // seed the random number generator... but whats that daddy?? ... ... ... JUST DO IT!
    srand(time(NULL)); // this makes it so your random numbers are NOT always the same.
    
    // ask for strings! (or boys names)
    
    int personsrules[11];
    printf("Please type 1 number in beetween 1 and 11\nThis number will effect your future\n(Trust Me)");
    scanf("%d", personsrules);
    printf("Thank you. I will put this number to good use.");
    
    char replacement;
    if(personsrules == 0||personsrules == 2||personsrules == 4||personsrules == 6||personsrules == 8||personsrules == 10)
{
    
}
    
    char name[100];
    
    printf("Please type the name of your dad: ");
    scanf("%s", name);
    
    char places[3][100];
    printf("Please enter the name of three places you like:\n");
    printf("> ");
    scanf("%s", places[0]);
    printf("> ");
    scanf("%s", places[1]);
    printf("> ");
    scanf("%s", places[2]);
    
    int numberOfBoys;
    printf("How many boys do you like?\n");
    printf("> ");
    scanf("%d", &numberOfBoys);
    
    char boyNames[numberOfBoys][100];
    for (int i = 0; i < numberOfBoys; ++i)
    {
        printf("Type boy name number %d: ", i + 1);
        scanf("%s", boyNames[i]);
    }
    
    printf("You are going to marry...\n");
    for (int i = 0; i < 5; ++i)
    {
        sleep(1);
        printf("Calculating...\n");
    }
    
    printf("%s!!!!!!\n", boyNames[rand() % numberOfBoys]);
    printf("%s Is %s going to like it\n", name, replacement);
    printf("The first letter of your dad's name is \"%c\"\n", name[0]);
    printf("And the whole name is \"%s\"\n", name);
    printf("The place in the middle is \"%s\"\n", places[1]);
    printf("And a random place you like is \"%s\"\n", places[rand() % 3]);
    // HOMEWORK
    // Make this program so it doesn't print anything until the end, and it will print:
    // you are going to marry (random boy name here) in (random place name here) and (dad name here) is not going to like it!
    
    // Bonus points, make it so the dad randomly likes it or not.
    
    return 0;
}