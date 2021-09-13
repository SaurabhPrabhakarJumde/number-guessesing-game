// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%50+1;//generate a random number between 1 to 50
    //printf("the number is %d\n");
    //keep running the loop untile the number is guessed
    do
    {
        printf("gusse the number between 1 to 50\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("enter lower number pls\n");
        }
        else if(guess<number)
        {
            printf("emter higher number pls\n");
        }
        else
        {
            printf("you guessed it in %d attemts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);    
    return 0;
}